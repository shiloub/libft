#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *s1_ = (char *)s1;
	char *s2_ = (char *)s2;
	int lens1;
	int lens2;
	char *strcat;
	int i;

	lens1 = ft_strlen(s1_);
	lens2 = ft_strlen(s2_);
	i = 0;

	if(!(strcat = malloc(sizeof(char) * (lens1 + lens2 + 1))))
		return(0);
	while (s1[i])
	{
		strcat[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		strcat[i + lens1] = s2[i];
		i++;
	}
	strcat[i + lens1] = '\0';
	return(strcat);
}
