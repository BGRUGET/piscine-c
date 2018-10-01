/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   repeat_alpha.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: begruget <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/15 01:14:16 by begruget     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/16 01:24:40 by begruget    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */


#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int i;
	int j;


	i = 0;
	j= 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if(av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				j = av[1][i] - 96;
				while (j > 0)
				{
					ft_putchar(av[1][i]);
					j--;
				}
				i++;
			}
			else if(av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				j = av[1][i] - 64;
				while (j > 0)
				{
					ft_putchar(av[1][i]);
					j--;
				}
				i++;
			}
			else
			{
				ft_putchar(av[1][i]);
				i++;
			}
		}
	}
	ft_putchar('\n');
	return (0);
}
