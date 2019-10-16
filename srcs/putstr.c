/*******************************************************************
putstr source code
ensea ensea  88 oct.  16 16:17 putstr.c
*******************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int	ft_putstr(char *str){
	int l;
	l = ft_strlen(str);
	write(1,str, l);
	return (l);
}
