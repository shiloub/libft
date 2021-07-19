#include <unistd.h>
#include "libft.h"

char	*setnewstr(char *s, int start, char c)
{
	char *str;
	int i;
	int strl;

	strl = 0;
	i = 0;
	while(s[strl + start] && s[strl + start] != c)
		strl++;
	if (!(str = malloc(sizeof(char) * (strl + 1))))
		return(0);
	while(i < strl)
	{
		str[i] = s[i + start];
		i++;
	}
	str[i] = '\0';
	return(str);
}

int	f_countdel(const char* s, char c)
{
	int count;
	int i;
	int new;

	new = 0;
	i = 0;
	count = 0;
	while (s[i])
	{
		while(s[i] != c && s[i])
		{
			new = 1;
			i++;
		}
		if(new)
			count++;
		new = 0;
		if (s[i])
			i++;
	}
	return(count);
}
char	**ft_split(char const *s, char c)
{
	char **tab;
	int i;
	int j;

	i = 0;
	j = 0;
	if (!(tab = malloc(sizeof(char *) * (f_countdel((char *)s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			tab[j] = setnewstr((char *)s, i, c);
			j++;
		}
		while(s[i] != c && s[i])
			i++;
		if (s[i])
			i++;
	}
	tab[j] = NULL;
	return(tab);
}
/*int main()
{
	int i = 0;
	char **tab = ft_split("saaaaaalut les gars ca va ?", ' ');
	while (i < 6)
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return(0);
}*/

