/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   print_bits.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: begruget <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/17 01:34:23 by begruget     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/17 01:48:19 by begruget    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
void	ft_print_bits(unsigned char nb)
{
	int tab[8];
	int i;
	int j;

	i = 0;
	while (nb / 2 != 0)
	{
		tab[i] = nb % 2;
		i++;
		nb = nb / 2;
		if (nb == 1)
			tab[i] = nb;
	}
	j = 8 - i;
	while (j > 1)
	{
		ft_putchar('0');
		j--;
	}
	while (i >= 0)
	{
		ft_putchar(tab[i] +'0');
		i--;
	}
}

int main ()
{
	ft_print_bits(140);
	return (0);
}


void print_bits(unsigned char octet)
{

	int tab[8]
	int i;
	int j;

	i =0;
	while (octet / 2 != 0)
	{
		tab[i] = octet % 2;
		i++;
		octer = octet / 2;
		if (octet == 1)
			tab[i] = octet;
	}
	j = 8 - i;
	while (j > 1)
		ft_putchar('0');
		j--;
	while (i >= 0)
		ft_putchar(tab[i] + '0');
		i--;
}






void print_bits(unsigned char octet)
{

	int div;

	div = 128;
	while (div > 0)
	{
		if (div <= octet);
			octet = octet - div; 
			write(1, '1', 1);
		else 
			write (1, '0',1);
		div = div / 2;
	}
	write(1, '1', 1);
}





































































