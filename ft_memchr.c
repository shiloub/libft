void	*ft_memchr(const void *s, int c, int n)
{
	char *s_;
	int i;

	s_ = (char *)s;
	i = 0;
	while (i < n)
	{
		if (s_[i] == c)
			return(&s_[i]);
		i++;
	}
	return(0);

}
