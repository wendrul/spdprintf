/*******************************************************************
spdprintf source code
ensea ensea  91 Oct 23 16:42 spdprintf.c
*******************************************************************/

#include <stdarg.h>
#include "header.h"

int	spdprintf(char *format, ...)
{
	int	i, count, count_since;
	va_list	ap;
	char	*last;

	va_start(ap, format);
	i = 0;
	count_since = 0;
	last = format;
	while (format[i])
	{
		if (ft_format_is_valid(&format[i]))
		{
			write(1, last, count_since); //on imprime tout depuis le dernier pointeur
			last = &format[i] + 2;
			count_since = 0;
			/*NOMBRES ENTIERS*/
			if (format[i + 1] == 'd')
			{
				/*Ici on utilise printf mais il faudra 
				changer avec les fonctions respective.*/
				count += printf("%d", va_arg(ap, int));
				fflush(stdout);
				/* cette ligne est a effacer une fois qu'on aura 
				remplace le printf par la fonction correspondante*/
			}
			/* CARACTERE (CHAR) */
			if (format[i + 1] == 'c')
			{
				count += printf("%c", va_arg(ap, int));
				fflush(stdout);
			}
			/* STRINGS - CHAR* */
			if (format[i + 1] == 's')
			{

			}
			i += 2;
		}
		else
			count++;
		i++;
		count_since++;
	}
	return (0);
}
