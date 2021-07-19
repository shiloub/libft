#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int i;
	int count;
	char *str;

	count = 0;
	i = 0;
	while(i < len && s[i + start])
	{
		i++;
		count ++;
	}
	if (!(str = malloc(sizeof(char) * (count + 1))))
		return(0);
	i = 0;
	while(s[start + i] && count > 0)
	{
		str[i] = s[i + start];
		i++;
		count --;
	}
	str[i] = '\0';
	return(str);
}
