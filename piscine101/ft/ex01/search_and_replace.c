/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   search_and_replace.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: begruget <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/16 00:34:53 by begruget     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/16 00:49:38 by begruget    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 4 && av[2][1] == '\0' && av[3][1] == '\0')
	{
		while (av[1][i] != '\0')
		{
			if(av[1][i] == av[2][0])
				ft_putchar(av[3][0]);
			else
				ft_putchar(av[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
