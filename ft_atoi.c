int	checkifgood(char c, int sign)
{
	if ((c >= '0' && c <= '9') || ((c >= 9 && c <= 13) && sign == 0) || (c == 32 && sign == 0) || (c == '+' && sign == 0) || (c == '-' && sign == 0))
		return(1);
	else
		return(0);
}

int	ft_isnum(char c)
{
	if(c >= '0' && c <= '9')
		return(1);
	else
		return(0);
}

int	ft_atoi(char *str)
{
	int i;
	int sign;
	int nbr;
	int nbr_found;
	int change;

	change = 0;
	sign = 0;
	nbr_found = 0;
	i = 0;
	nbr = 0;
	while (checkifgood(str[i], sign))
	{
		if (str[i] == '-' || str[i] == '+')
		{
			sign++;
			if (str[i] == '-')
				change = 1;
		}
		while (ft_isnum(str[i]))
		{
			nbr_found = 1;
			nbr = (nbr * 10) + (str[i] - '0');
			i++;
		}
		if (nbr_found && change == 1)
			return(-nbr);
		if (nbr_found && change == 0)
			return(nbr);
		i++;
	}
	return(0);
}
