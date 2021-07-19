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
	int nfig;
	char *str;
	int neg;
	
	neg = 0;
	if (value < 0)
	{
		neg = 1;
		value = -value;
	}
	i = value;
	nfig = 1;
	while (i > 9)
	{
		nfig++;
		i = i / 10;
	}
	if(!(str = malloc(sizeof(char) * (nfig + neg))))
		return(0);
	i = 0;
	if (neg)
	{
		str[0] = '-';
		i = 1;
	}
	while (nfig > 0)
	{
		str[i] = '0' + value / puiss(10, nfig - 1);
		value = value % puiss(10, nfig - 1);
		i++;
		nfig--;
	}
	return(str);
}
