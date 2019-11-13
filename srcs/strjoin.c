/*******************************************************************
strjoin source code
wendril wendril   89 Oct 24 12:51 strjoin.c
*******************************************************************/

#include "header.h"

int	indexof(char *str, char to_find)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] == to_find)
			return (i);
	return (-1);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*dest;

	dest = (char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (dest == NULL)
		return (NULL);
	
	return (0);
}
