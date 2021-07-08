void	ft_bzero(void *s, unsigned int t)
{
	int *p;
	unsigned int i;

	i = 0;
	while (i < t)
	{
		p = s + i;
		*p = 0;
		i++;
	}
}
