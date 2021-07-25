#include "libft.h"

void	ft_bzero(void *s, int t)
{
	int	*p;
	int	i;

	i = 0;
	while (i < t)
	{
		p = s + i;
		*p = 0;
		i++;
	}
}
