/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   algo.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: begruget <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/22 21:43:31 by begruget     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/22 21:53:02 by begruget    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/include.h"

void	draw_map(t_map *map, t_carre *square)
{
	unsigned int		i;
	unsigned int		j;

	i = 0;
	while (i < map->length)
	{
		j = 0;
		while (j < map->width)
		{
			write(1, (j >= square->x && j < square->x + square->size
			&& i >= square->y && i < square->y + square->size)
			? &map->verif[2] : &map->board[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

char	move_square(t_map *map, t_carre *square)
{
	unsigned int		i;
	unsigned int		j;

	i = 0;
	while (i < square->size
	&& map->board[square->y][square->x + i] != map->verif[1])
	{
		j = 0;
		while (j < square->size
		&& map->board[square->y + j][square->x + i] != map->verif[1])
			j++;
		if (j != square->size)
			break ;
		i++;
	}
	if (i == square->size)
	{
		draw_map(map, square);
		return (1);
	}
	return (0);
}

char	map_find_square(t_map *map)
{
	unsigned int	pre_calc_end_x;
	unsigned int	pre_calc_end_y;
	t_carre			square;

	square.size = (map->length < map->width) ? map->length + 1 : map->width + 1;
	while (--square.size)
	{
		square.y = -1;
		pre_calc_end_x = map->width - square.size;
		pre_calc_end_y = map->length - square.size;
		while (++square.y <= pre_calc_end_y)
		{
			square.x = -1;
			while (++square.x <= pre_calc_end_x)
			{
				if (move_square(map, &square))
					return (0);
			}
		}
	}
	return (1);
}
