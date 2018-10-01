/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   union.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: begruget <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/17 00:45:59 by begruget     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/23 01:37:27 by begruget    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		not_seen(char *s1,int  pos, char  c)
{
	int i;

	i = 0;
	while (i < pos)
	{
		if (s1[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	ft_union(char *s1, char * s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i] != '\0' )
	{
		if (not_seen(s1, i, s1[i]))
			ft_putchar(s1[i]);
		i++;
	}
	j = 0;
	while(s2[j] != '\0')
	{
		if (not_seen(s1, i, s2[j]) && not_seen(s2, j, s2[j]))
			ft_putchar(s2[j]);
		j++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	ft_putchar('\n');
	return(0);
}
