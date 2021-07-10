char	*ft_strncat(char *dest, const char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while ((j + i) < n && src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	if((j + i) == n)
	{
		dest[i + j - 1] = '\0';
	}
	else
		dest[i + j] = '\0';
	return(dest);
}

