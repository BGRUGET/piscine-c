/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   check.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: begruget <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/22 09:20:30 by begruget     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/22 11:33:03 by begruget    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int check_char(char buff, t_map map)
{
	int i;

	i = 0;
	while (i < 2)
		if (map.verif[i] == buff)
			return (1);
	return (0);
}
