/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   recup.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: begruget <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/22 17:39:17 by begruget     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/22 22:31:55 by begruget    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/include.h"
#include <stdio.h>

t_coord	*init_coord(int x, int y)
{
	t_coord	*co;

	if (!(co = malloc(sizeof(co))))
		return (0);
	co->x = x;
	co->y = y;
	return (co);
}

int		check_char(char buff, t_map *map)
{
	int	i;

	i = 0;
	while (i < 2)
		if (map->verif[i++] == buff)
			return (1);
	map->error = 1;
	return (0);
}

void	ft_recup_info_map(int file, t_map *map)
{
	unsigned int		i;
	char				buff;
	char				tab[128];

	i = 0;
	while (ft_read(file, &buff, map) > 0 && buff != '\n')
		tab[i++] = buff;
	i--;
	map->length = 0;
	while (map->length < 3)
	{
		map->verif[2 - map->length++] = tab[i];
		tab[i--] = '\0';
	}
	i = -1;
	map->length = 0;
	while (tab[++i] != '\0')
	{
		if (tab[i] >= '0' && tab[i] <= '9')
			map->length = (map->length * 10) + tab[i] - '0';
		else
			map->error = 1;
	}
	verif_tab_verif(map);
}

void	ft_recup_first_line(int file, t_map *map)
{
	char			status;
	unsigned int	i;
	char			*swap[2];
	char			buff;

	map->width = 0;
	status = 0;
	while (ft_read(file, &buff, map) > 0 && buff != '\n'
			&& check_char(buff, map))
	{
		i = 0;
		if (!(swap[status & 0x01] = (char*)malloc(map->width + 1)))
			return ;
		while (i++ < map->width)
			swap[status & 0x01][i - 1] = swap[status ^ 0x01][i - 1];
		swap[status & 0x01][map->width] = buff;
		if (map->width)
			free(swap[status ^ 0x01]);
		map->width++;
		status ^= 0x01;
	}
	map->line = swap[status ^ 0x01];
}

void	ft_recup_map(int file, t_map *map)
{
	char			buff;
	unsigned int	i;
	t_coord			*co;

	i = 1;
	co = init_coord(0, 0);
	if (!(map->board = (char**)malloc(sizeof(char*) * (map->length + 2))))
		return ;
	while (i < map->length + 1)
		if (!(map->board[i++] = (char*)malloc(sizeof(char) * (map->width + 1))))
			return ;
	while (ft_read(file, &buff, map) > 0 && (buff == '\n'
				|| check_char(buff, map))
			&& co->x <= map->width && co->y <= map->length)
	{
		if (buff == '\n')
		{
			co = init_coord(-1, co->y + 1);
		}
		else
			map->board[co->y + 1][co->x] = buff;
		co->x++;
	}
	map->board[0] = map->line;
	map->error = (co->x > map->width || co->y > map->length) ? 1 : 0;
}
