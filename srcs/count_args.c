/*******************************************************************
count_args source code
wendril wendril  92 Oct 16 16:41 count_args.c
*******************************************************************/

#include "header.h"

int	ft_count_args(char *format)
{
	int count;

	count = 0;
	while (*format)
	{
		if (ft_format_is_valid(format))
			count++;
	}
	return (count);
}
