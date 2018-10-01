/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ulstr.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: begruget <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/16 00:20:04 by begruget     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/16 00:54:11 by begruget    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int main (int ac, char ** av)
{
	int i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				ft_putchar(av[1][i] - 32);
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z') 
				ft_putchar(av[1][i] = av[1][i] + 32);
			else 
				ft_putchar(av[1][i]);
			i++;
		}
	}
	ft_putchar ('\n');
	return(0);
}
