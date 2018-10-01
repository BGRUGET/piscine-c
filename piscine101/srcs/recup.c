/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   recup.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: begruget <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/22 11:35:55 by begruget     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/22 11:50:31 by begruget    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void>---ft_recup_info_map(int file, t_map *map) // recup de la premiere ligne info map; 
{
	 int  i;
	 char buff;

	i = 0;
	while (read(file, &buff, 1) > 0 &&  buff  =! '\n') // cas de tout chiffre a verifier 
	{
		if (!i && buff >= '0' && buff <= '9')
			map->length = (map->length * 10) + buff - '0';
		else if (i < 3)
			map->verif[i++] = buff;
		else
			return(0);
	}
}

void	ft_recup_first_line(int file, t_map *map) // fonction a spliter en plusieurs : swap 
{
	int i;
	char buff;
	char *tab;
	char *tab2;
	int swap;

	swap = 1;
	map->width = 0;
	while(read(file, &buff, 1) > 0 && check_char(buff, map) && buff != '/n') // swap de malloc + 1 a chaque fois 
	{
		map->width++;
		if(swap == 1)
		{
			tab = (char*)malloc(sizeof(char)*(map->width + 1))
			i = 0;
			while (i < width - 1)
			{
				tab[i] = tab2[i];
				i++;
			}
			tab[i] = buff;
			if(tab2)
				free(tab2);
			swap = 0;
		}
		else
		{
			tab2 = (char*)malloc(sizeof(char)*(map->width + 1))
			i = 0;
			while (i < map->width -1)
			{
				tab2[i] = tab[i];
				i++;
			}
			tab2[i] = buff;
			free(tab);
			swap = 1;
		}
	}
	if (swap = 1) 
		map->line = tab2;
		free(tab2);
	else
		map->line = tab;
		free(tab);
}
void	ft_recup_map_(int file,t_map *map)
{
	int x;
	int y;

	x = 0;
	y = 0;
	map->board = (char**)malloc(sizeof(char*) * (map->length));
		while (i < map->width)
			map->board[i] = (char*)malloc(sizeof(char*) * (map->width + 1));
	while(read(file, &buff, 1) > 0 && buff != '\0' && x < map->width
			&& y < map->length && check_char(buff, map))
	{
		if (buff == '\n')
		{
			y++;
			x = 0;
		}
		map->board[y][x] = buff
		x++;
	}
	map->error = (x > map->width || y >map->length || !(check_char(buff, map)) ? 1 : 0; 
}

