int	ft_memsize(const char *s, int n)
{
	int i;
	int memsize;

	i = 0;
	memsize = 0;
	while (s[i] && i < n)
	{
		if (s[i] >= 0)
			memsize += s[i];
		else
			memsize -= s[i];
		i++;
	}
	return(memsize);
}
int	ft_memcmp(const void *s1, const void *s2, int n)
{
	const char *s1_;
	const char *s2_;
	int s1size;
	int s2size;

	s1_ = s1;
	s2_ = s2;
	s1size = ft_memsize(s1_, n);
	s2size = ft_memsize(s2_, n);
	return(s1size - s2size);
}
