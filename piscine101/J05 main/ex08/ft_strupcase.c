/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strupcase.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: begruget <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/06 19:54:45 by begruget     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/06 19:55:05 by begruget    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
int main ()
{

	char str[] = "hello w o @^$#%^%#*&*(l 123dwAawed";

	printf("str vaut %s\n", str);
	printf("moi: %s\n", ft_strupcase(str));
	
	return(0);
}