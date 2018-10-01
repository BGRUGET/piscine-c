/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   error.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: begruget <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/18 18:51:40 by begruget     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/18 18:51:51 by begruget    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/uio.h>


int		main(int ac, char **av)
{
	char buf;
	(void)av;

	if (ac == 1)
	{
		while (read(0, &buf, 1))
			write(1, &buf, 1);
	}
	return (0);
}
