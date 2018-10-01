/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   struct.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: begruget <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/20 16:20:00 by begruget     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/22 11:50:35 by begruget    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct	s_carre
{
	int			x;
	int			y;
	int			length;
}				t_carre;

typedef struct	s_map
{
	int			length;
	int 		width;
	char		verif[3];
	int			error;
	char		*line;
	char		**board;
}				t_map;

#endif
