#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdio.h>
# include <math.h>
# include "color.h" // permet d'avoir du texte colore

/* typedefs... */

int		spdprintf(char *format, ...);
int		ft_strlen(char *str);
int		ft_putstr(char *str);
int		ft_format_is_valid(char *str);
int		ft_putnbr(int nbr);
void	ft_putnbr_base(int nbr, char *base);
void	ft_putchar(char c);
void	ft_putdec(double nb);

# define MODIFIED_BY_SCRIPT 0

#endif
