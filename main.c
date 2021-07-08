#include <string.h>
#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_strlcat(char *dest, char *src, int n);

int main()
{
	char *src = "lorem ipsum dolor sit amet";
	char dest[15] = "666666";
	printf("%d\n", ft_strlcat(dest, src, 15));
	printf("%s", dest);
	return 0;
}
