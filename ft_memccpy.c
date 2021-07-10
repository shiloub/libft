#include <stdio.h>

void	*ft_memccpy(void *dest, const void *src, int c, int n)
{
	int i;
	const char *src_;
	char *dest_;

	i = 0;
	src_ = src;
	dest_ = dest;
	while (i < n)
	{
		dest_[i] = src_[i];
		if(src_[i] == c)
			return(&dest_[i] + 1);
		i++;
	}
	return(0);
}
