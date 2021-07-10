#include "libft.h"

int	ft_strsize(const char *str, int n)
{
	int i;
	int size;

	size = 0;
	i = 0;
	while (str[i] && i < n)
	{
		if (str[i] >= 0)
			size += str[i];
		else
			size -= str[i];
		i++;
	}
	return(size);
}
int	ft_strncmp(const char *s1, const char *s2, int n)
{
	int s1_size;
	int s2_size;
	
	s1_size = ft_strsize(s1, n);
	s2_size = ft_strsize(s2, n);
	return(s1_size - s2_size);
}
