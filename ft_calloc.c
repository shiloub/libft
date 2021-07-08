void	*ft_calloc(int nmemb, int size)
{
	int i;
	int j;
	char c;
	char d;
	char *p;
	char *n;

	p = &c;
	
	i = 0;
	while (i < nmemb)
	{
		j = 0;
		while (j < size)
		{
			*p = 0;
			p++;
			j++;
		}
		i++;
	}
	return(n);
}
