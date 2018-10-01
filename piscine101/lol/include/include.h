/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   include.h                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: begruget <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/22 22:07:39 by begruget     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/22 22:28:41 by begruget    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef INCLUDE_H
# define INCLUDE_H

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct	s_carre
{
	unsigned int	x;
	unsigned int	y;
	unsigned int	size;
}				t_carre;

typedef struct	s_map
{
	unsigned int	length;
	unsigned int	width;
	char			verif[3];
	int				error;
	char			**board;
	char			*line;
}				t_map;

typedef struct	s_coord
{
	unsigned int	x;
	unsigned int	y;
}				t_coord;

void			ft_recup_map(int file, t_map *map);
void			ft_recup_first_line(int file, t_map *map);
void			ft_recup_info_map(int file, t_map *map);
int				check_char(char buff, t_map *map);
int				ft_read(int file, char *buff, t_map *map);
char			map_find_square(t_map *map);
void			verif_tab_verif(t_map *map);

#endif
