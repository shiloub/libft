#include <stdio.h>
#include <stdlib.h>

int	check_neg(int nb, int *neg)
{
	unsigned int n;
	if(nb < 0)
	{
		n = -nb;
		*neg = 1;
	}
	else
	{
		n = nb;
		*neg = 0;
	}
	return (n);
}

int	sizeof_int(unsigned int nb)
{
	int	count;

	count = 1;
	while (nb >= 10)
	{
		count++;
		nb = nb / 10;
	}
	return (count);
}
char	*ft_itoa(int nb)
{
	unsigned int i;
	unsigned int n;
	char *nbr;
	int neg;

	n = check_neg(nb, &neg);
	nbr = malloc(sizeof(char) * sizeof_int(n) + neg);
	i = sizeof_int(n);
	nbr[i + neg] = 0;
	while(i > 0)
	{
		nbr[i - 1 + neg] = '0' + n % 10;
		n = n / 10;
		i--;
	}
	if (neg == 1)
		nbr[0] = '-';
	return (nbr);
}
