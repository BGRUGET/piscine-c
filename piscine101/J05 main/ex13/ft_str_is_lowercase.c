/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_str_is_lowercase.c                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: begruget <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/07 02:59:10 by begruget     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/07 02:59:12 by begruget    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	if (!str)
		return (1);
	while (str[i] != '\0' && (str[i] >= 'a' && str[i] <= 'z'))
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

	printf("moi: %d\n", ft_str_is_lowercase(str));
	
	return(0);
}
