#include <stdlib.h>
#include "libft.h"

int	strchrchar(const char *str, char c)
{
	int i;
	int find;

	i = 0;
	find = 0;
	while (str[i])
	{
		if (str[i] == c)
			find = 1;
		i++;
	}
	return(find);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	int i;
	int len;
	char *str;
	int count;
	int j;
	
	i = 0;
	count = 0;
	j = 0;
	len = ft_strlen((char *)s1);
	str = malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		if (!strchrchar(set, s1[i]))
		{
			while(s1[i])
			{
				str[j] = s1[i];
				if (strchrchar(set, str[j]))
					count++;
				else
					count = 0;
				i++;
				j++;
			}
		}
		i++;
	}
	len = ft_strlen(str);
	str[len - count] = '\0';
	return(str);
}
