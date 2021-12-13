#include "libft.h"

void *ft_memcpy(void *dest, const void *src, int n)
{
    int i;
    char *p;

    p = (char*)src;
    i = 0;
    while (i < n)
    {
        ft_memset((dest + i), *(p + i), 1);
        i++;
    }
    return (dest);
}
