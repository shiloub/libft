#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int s_len;
	char *s_;
	char *s2;
	int i;

	i = 0;
	s_ = (char *)s;
	s_len = ft_strlen(s_);
	s2 = malloc(sizeof(char) * s_len + 1);
	while (s[i])
	{
		s2[i] = s[i];
		i++;
	}
	s2[i] = '\0';
	return(s2);
}
