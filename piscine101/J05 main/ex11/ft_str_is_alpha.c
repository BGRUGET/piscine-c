/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_str_is_alpha.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: begruget <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/07 02:17:47 by begruget     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/07 02:20:37 by begruget    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	if (!str)
		return (1);
	while (str[i] != '\0' && ((str[i] >= 'A' && str[i] <= 'Z')
		|| (str[i] >= 'a' && str[i] <= 'z')))
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

	char str[] = "";

	printf("moi: %d\n", ft_str_is_alpha(str));
	
	return(0);
}