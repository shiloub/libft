#include "libft.h"

int	ft_strlcpy(char *dest, const char *src, int size)
{
	int i;
	char *src_;

	i = 0;
	src_ = (char *)src;
	while (i < size && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	if (i == size)
		dest[size - 1] = '\0';
	else
		dest[i] = '\0';
	return(ft_strlen(src_));
}
