#include "libft.h"

void *ft_memmove(void *dest, const void *src, int n)
{
    char temp[1000];
    ft_memcpy(temp, src, n);
    ft_memcpy(dest, temp, n);
    return (dest);
}
