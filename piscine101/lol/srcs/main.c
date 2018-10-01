/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: begruget <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/22 17:36:25 by begruget     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/22 22:42:04 by begruget    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/include.h"
#include <stdio.h>

void	print_map(t_map *map)
{
	unsigned int x;
	unsigned int y;

	if (!map->length || !map->width)
		write(2, "map error\n\n", 11);
	else
	{
		y = 0;
		while (y < map->length)
		{
			x = 0;
			while (x <= map->width)
			{
				write(1, &map->board[y][x], 1);
				x++;
			}
			write(1, "\n", 1);
			y++;
		}
		write(1, "\n", 1);
	}
}

void	chiantude(t_map *map)
{
	if (!map->length || !map->width)
		write(2, "map error\n", 10);
	else
	{
		write(1, &map->verif[1], 1);
		write(1, "\n", 1);
	}
}

void	ft_recup(int file, t_map *map)
{
	ft_recup_info_map(file, map);
	if (!map->error)
		ft_recup_first_line(file, map);
	if (!map->error)
		ft_recup_map(file, map);
}

int		main(int argc, char **argv)
{
	int		i;
	int		arg;
	int		file;
	t_map	*map;

	map = (t_map*)malloc(sizeof(t_map));
	map->error = 0;
	i = -1;
	arg = (argc - 1) ? argc - 1 : 1;
	while (++i < arg)
	{
		if (i)
			write(1, "\n", 1);
		file = (argc - 1) ? open(argv[i + 1], O_RDONLY) : 0;
		ft_recup(file, map);
		if (map->error)
			write(2, "map error\n", 10);
		else if (map_find_square(map))
			chiantude(map);
		if (file)
			close(file);
	}
	return (0);
}
