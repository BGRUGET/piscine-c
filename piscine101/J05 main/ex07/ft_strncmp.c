/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncmp.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: begruget <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/06 19:32:45 by begruget     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/06 19:33:24 by begruget    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n)
		i++;
	return (s1[i] - s2[i]);
}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
int main ()
{

	char s1[] = "aeraa";
	char s2[] = "aeraabertert";
	int n1 = 5;
	printf("s1 vaut %s\n s2 vaut  %s\n ft_strcmp%d\n", s1, s2, ft_strncmp(s1, s2, n1));
	printf("s1 vaut %s\n s2 vaut  %s\n strcmp%d\n", s1, s2, strncmp(s1, s2, n1));
	return(0);
}
