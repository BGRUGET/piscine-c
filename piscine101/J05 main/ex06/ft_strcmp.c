/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: begruget <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/06 18:09:50 by begruget     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/06 18:11:09 by begruget    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
int main ()
{

	char s1[] = "aeaaa";
	char s2[] = "aeaab";
	printf("s1vaut %s\n s2 vaut  %s\n ft_strcmp%d\n", s1, s2, ft_strcmp(s1, s2));
	char s12[] = "aeaaa";
	char s22[] = "aeaab";
	printf("s1vaut %s\n s2 vaut  %s\n strcmp%d\n", s12, s22, strcmp(s12, s22));
	return(0);
}