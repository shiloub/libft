#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	char	*mem;

	mem = malloc(nmemb * size);
	i = 0;
	while (i < nmemb)
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}
