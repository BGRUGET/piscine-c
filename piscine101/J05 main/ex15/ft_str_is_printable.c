/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_str_is_printable.c                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: begruget <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/07 03:14:06 by begruget     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/07 03:14:09 by begruget    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	if (!str)
		return (1);
	while (str[i] != '\0' && (str[i] >= 32 && str[i] < 127))
		i++;
	if (str[i] != '\0')
		return (0);
	else
		return (1);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
int main ()
{

	char str[] = "ewfefsd	fdsf ";

	printf("moi: %d\n", ft_str_is_printable(str));
	
	return(0);
}
