int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i ++;
	}
	return(i);
}
unsigned int	ft_strlcat(char *dest, char *src, int n)
{
	int i;
	int j;
	int srclen;
	int destlen;

	i = 0;
	j = 0;
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	while (dest[i])
	{
		i++;
	}
	while (src[j] && n)
	{
		dest[i + j] = src[j];
		j++;
		n--;
	}
	if (n == 0)
	{
		dest[j + i - 1] = '\0';
		return(srclen + destlen);
	}
	else
		dest[i + j] = '\0';
	return(i + j);
}
