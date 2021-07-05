void	*ft_memset(void *s, int c, int n)
{
	int i;
	int *p;

	i = 0;
	while(i < n)
	{
		p = i + s;
		*p = c;
		i++;

	}
	return (s);
}
