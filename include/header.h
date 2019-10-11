#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdio.h>
# include "color.h" // permet d'avoir du texte colore

/* typedefs... */

int	spdprintf(char *format, char *dest, ...);
int	ft_strlen(char *str);

# define MODIFIED_BY_SCRIPT 1

#endif
