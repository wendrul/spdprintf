/*******************************************************************
strlen source code
rodolphe 361 Oct 10 11:17 strlen.c
*******************************************************************/

#include "header.h"

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}
