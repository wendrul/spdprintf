/*******************************************************************
  format_is_valid source code
  axel  97 Oct 23 15:30 format_is_valid.c
 *******************************************************************/

#include "header.h"

/* Lit une chaine de caracteres finalisee par un whitespace
   commencant par % et verifie si c'est un format valide (i.e.: c'est 
   un %d, %x elle retourne 1, si c'est %lol renvoie 0 car invalide)*/

int	ft_format_is_valid(char *str){
	if (str[0]!='%'){
		return 0;
	}
	if (*(str+1) =='d' ||
			*(str+1) =='x' ||
			*(str+1) =='f' || 
			*(str+1) =='c' ||
			*(str+1) =='s')
	{
		if (str[2] == ' ' || 
			str[2] == '\f' ||
			str[2] == '\t' ||
			str[2] == '\n' ||
			str[2] == '\r' ||
			str[2] == '\v')
		{
			return 1;
		}
		else
		{
			return 0;
		}	
	}
	else{
		return 0;
	}
}
