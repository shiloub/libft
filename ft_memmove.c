#include "libft.h"

void	*ft_memmove(void *dest, const void *src, int n)
{
	char		*dest_;
	const char	*src_;
	int			i;

	dest_ = (char *)dest;
	src_ = (char *)src;
	i = 0;
	if ((src_ < dest_ && src_ + n > dest_))
	{
		while (i < n)
		{
			dest_[n - i - 1] = src_[n - i - 1];
			i++;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
