void	*ft_memcpy(void *dest, const void *src, int n)
{
	int i;
	const char *src_;
	char *dest_;

	i = 0;
	src_ = src;
	dest_ = (char *)dest;
	while (i < n)
	{
		*dest_ = *src_;
		dest_++;
		src_++;
		i++;
	}
	return(dest);
}
