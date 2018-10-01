/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main_rush00.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: begruget <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/18 16:22:32 by begruget     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/18 16:23:16 by begruget    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	rush(int x, int y);

int		ft_atoi(char *string)
{
	int		i;
	int		num;

	i = 0;
	num = 0;
	while ((string[i] >= '0') && (string[i] <= '9'))
	{
		num = num * 10 + (string[i] - '0');
		i++;
	}
	return (num);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char *argv[])
{
	int		x;
	int		y;
	int		i;
	int		j;

	j = 1;
	if (argc != 3)
		return (0);
	while (j <= 2)
	{
		i = 0;
		while (argv[j][i])
		{
			if (argv[j][i] >= '0' && argv[j][i] <= '9')
				i++;
			else
				return (0);
		}
		j++;
	}
	x = ft_atoi(argv[1]);
	y = ft_atoi(argv[2]);
	rush(x, y);
	return (0);
}
