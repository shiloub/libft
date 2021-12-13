#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, int n)
{
    int i;
    char *p;

    p = (char*)src;
    i = 0;
    while (i < n && (*(p + i) != c))
    {
        ft_memset((dest + i), *(p + i), 1);
        i++;
    }
    if (*(p + i) == c)
    {
        ft_memset((dest + i), *(p + i), 1);
        return (dest + i + 1);
    }
    else
        return (0);
}
