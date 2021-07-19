#include <unistd.h>
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int i;
	char l;

	l = '\n';
	i = 0;
	while(s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	write(fd, &l, 1);
}
