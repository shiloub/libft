#include <stdlib.h>
#include "stdlib.h"

int	puiss(int nbr, int expo)
{
	int i;

	i = nbr;
	if (expo == 0)
		return(1);
	while (expo > 1)
	{
		nbr = i * nbr;
		expo--;
	}
	return(nbr);
}
char	*ft_itoa(int value)
{
	int i;
	int count;
	char *str;
	int neg;
	
	neg = 0;
	if (value < 0)
	{
		neg = 1;
		value = -value;
	}
	i = value;
	count = 1;
	while (i > 9)
	{
		count++;
		i = i / 10;
	}
	if(!(str = malloc(sizeof(char) * (count + neg))))
		return(0);
	i = 0;
	while (count > 0)
	{
		str[count - 1 + neg] = '0' + value % 10;
		value = value / 10;
		i++;
		count--;
	}
	if (neg)
		str[0] = '-';
	return(str);
}
