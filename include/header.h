#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdio.h>
# include "color.h" // permet d'avoir du texte colore

/* typedefs... */

int	spdprintf(char *format, ...);
int	ft_strlen(char *str);
int	ft_putstr(char *str);
int	ft_format_is_valid(char *str);
int	ft_count_args(char *format);

# define MODIFIED_BY_SCRIPT 0

#endif
