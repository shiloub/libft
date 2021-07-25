#include <stdio.h>
#include <stdlib.h>
#include "stdlib.h"

int	checkneg(int *nbr)
{
	if (*nbr < 0)
	{
		*nbr = - *nbr;
		return (1);
	}
	return (0);
}

char	*ft_itoa(int value)
{
	unsigned int	i;
	unsigned int	n;
	int				count;
	char			*str;
	int				neg;

	neg = 0;
	if (value < 0)
	{
		neg = 1;
		n = -value;
	}
	else
		n = value;
	i = n;
	count = 1;
	while (i > 9)
	{
		count++;
		i = i / 10;
	}
	str = malloc(sizeof(char) * (count + neg));
	if (!str)
		return (0);
	i = 0;
	while (count > 0)
	{
		str[count - 1 + neg] = '0' + n % 10;
		n = n / 10;
		i++;
		count--;
	}
	if (neg)
		str[0] = '-';
	return (str);
}
