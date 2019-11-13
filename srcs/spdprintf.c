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
	count = 0;
	count_since = 0;
	last = format;
	while (format[i] != '\0')
	{
		if (ft_format_is_valid(&format[i]))
		{
			write(1, last, count_since); //on imprime tout depuis le dernier pointeur
			last = &format[i] + 2;
			count_since = 0;
			/*NOMBRES ENTIERS*/
			if (format[i + 1] == 'd')
				count += ft_putnbr(va_arg(ap, int)); 
			
			/* CARACTERE (CHAR) */
			if (format[i + 1] == 'c')
			{
				ft_putchar(va_arg(ap, int));
				count++;
			}
			/* STRINGS - CHAR* */
			if (format[i + 1] == 's')
				count += ft_putstr(va_arg(ap, char*));
			
			if (format[i + 1] == 'f')
				ft_putdec(va_arg(ap, double));
			
			if (format[i + 1] == 'x')
				ft_putnbr_base(va_arg(ap, int), "0123456789abcdef");
			if (format[i + 1] == 'b')
				ft_putnbr_base(va_arg(ap, int), "01");
			i += 2;
		}
		else
			count++;
		i++;
		count_since++;
	}
	return (count);
}
