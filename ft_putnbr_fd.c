#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int nbr, int fd)
{
	unsigned int	n;

	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		n = -nbr;
	}
	else
		n = nbr;
	if (n < 10)
	{
		ft_putchar_fd(n + '0', fd);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd((n % 10) + '0', fd);
	}
}
