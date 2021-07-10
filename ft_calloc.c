#include <stdlib.h>

void	*ft_calloc(int nmemb, int size)
{
	int i;
	char *mem;
	
	mem = malloc(nmemb * size);
	i = 0;
	while(i < nmemb)
	{
		mem[i] = 0;
		i++;
	}
	return(mem);
}
