#include "header.h"

void ft_putdec(double nb)
{
		if (nb >= 0) //Sign test
		{
				int i = floor(nb);
				double j = nb-i; 
				int k = j*pow(10,9);
				ft_putnbr(i); //Displays the integer part
				putchar(46);  //Displays the "."
				ft_putnbr(k); //Displays the decimal part
		}
		else
		{	
				int i = fabs(floor(nb))-1;
				double j = fabs(nb)-i; 
				int k = j*pow(10,9);
				putchar(45);  //Displays the "-"
				ft_putnbr(i); //Displays the integer part
				putchar(46);  //Displays the "."
				ft_putnbr(k); //Displays the decimal part
		}
}
