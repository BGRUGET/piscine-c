/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: begruget <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/06 11:39:19 by begruget     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/06 11:53:31 by begruget    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
int main ()
{

	char src[] = "bonjoyr";
	char dest[] = "bonjour  ";
	printf("src vaut %s\n" "dest vaut  %s\n" "ft_strcpy %s\n", src, dest, ft_strcpy(dest, src));
	//printf("(%s)-(%s)\n", dest, src);
	//printf("%s\n", strcpy(dest, src));
	//printf("(%s)-(%s)\n", dest, src);
	//printf("%s\n", strcpy(dest, src));
	return(0);
}