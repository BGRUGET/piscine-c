/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rev.print.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: begruget <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/15 01:56:33 by begruget     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/15 02:14:26 by begruget    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main (int ac, char **av)
{
	int i;

	i = 0;
	if(ac == 2)
	{
		while (av[1][i] != '\0')
		{
			i++;
		}
		i--;
		while (i >= 0)
		{
			ft_putchar(av[1][i]);
			i--;		
		}
	}
	ft_putchar('\n');
	return (0);
}