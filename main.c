#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_memset(void *s, int c, int n);
void	*ft_memcpy(void *dest, const void *src, int n);
int main()
{
	char *dest;
	char *src = "ABCDEFGH";
	
	dest = src + 2;
	free(dest);
	return 0;
}
