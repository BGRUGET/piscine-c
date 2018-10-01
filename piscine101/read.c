/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   read.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: begruget <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/22 21:31:57 by begruget     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/22 22:42:13 by begruget    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/include.h"

int		ft_read(int file, char *buff, t_map *map)
{
	int tmp;

	tmp = read(file, buff, 1);
	if (tmp == -1)
		map->error = 1;
	return (tmp);
}

void	verif_tab_verif(t_map *map)
{
	if (map->verif[0] == map->verif[1] || map->verif[0] == map->verif[2]
			|| map->verif[2] == map->verif[1])
		map->error = 1;
}
