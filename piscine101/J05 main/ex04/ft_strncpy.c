/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: begruget <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/06 12:11:45 by begruget     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/06 12:11:57 by begruget    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
int main ()
{

	char src[] = "aa";
	char dest[] = "b";
	unsigned int n = 5;
	char src1[] = "aa";
	char dest2[] = "b";
	unsigned int n2 = 5;

	printf("src vaut %s\n dest vaut %s\n n vaut %u\n ", src, dest, n);
	printf("moi %s\n", ft_strncpy(dest, src, n));
	printf("src1 vaut %s\n dest2 vaut  %s\n n2 vaut %u\n ", dest2, src1, n2);
	printf("%s\n", strncpy(dest2, src1, n2));
	return(0);
}