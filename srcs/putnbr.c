#include <stdio.h>
#include <math.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_putnbr(int nbr)
{
		int count;
		int n = 0;
		unsigned int nb;

		count = 0;
		if (nbr > 0)
			nb = nbr;
		else
		{
			nb = -nbr;
			ft_putchar('-');
			count++;
		}
		while (pow(10,n) < nb)
		{
				n++;
		}

		int nnb = nb;
		int valeur;

		while (n != 0)
		{
				valeur = floor(nnb/pow(10,n-1));
				ft_putchar(valeur + 48);
				count++;
				nnb -= valeur*pow(10,n-1);
				n--;
		}
		return (count);
}
