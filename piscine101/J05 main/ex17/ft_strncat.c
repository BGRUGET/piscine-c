/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: begruget <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/07 20:09:02 by begruget     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/07 20:09:05 by begruget    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (i < nb)
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
int main ()
{
	char str[] = "aaaaqqqqq";
	char dest[100] = "bbbbbbb";
	int nb = 4;
	printf("moi: %s\n", ft_strncat(dest, str, nb));
	
	char dest2[100] = "bbbbbbb";
	printf("lui: %s\n", strncat(dest2, str, nb));
	
	return(0);
}