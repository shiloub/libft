char	*ft_strnstr(const char *s1, const char *s2, int size)
{
	int		i;
	int		j;
	int		where;
	char	*p;

	p = (char *)s1;
	i = 0;
	if (s2[0] == '\0')
		return (&p[0]);
	while (s1[i] && i < size)
	{
		j = 0;
		if (s1[i] == s2[j])
			where = i;
		while (s1[i] == s2[j])
		{
			i++;
			j++;
		}
		if (s2[j] == '\0' && i < size)
			return (&p[where]);
		i++;
	}
	return (0);
}
