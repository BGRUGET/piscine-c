/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: begruget <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/06 12:32:46 by begruget     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/06 12:33:23 by begruget    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (str[i] == to_find[j] && to_find[j] != '\0')
			{
				i++;
				j++;
				if (to_find[j] == '\0')
					return (str + i - j);
			}
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
int main ()
{

	char str[] = "bonjour je m'appellewo ewhrofhkjsdwohfjksdjkdnsfwor";
	char to_find[] = "wor";

	
	

	printf("str vaut %s\nto_find vaut %s\n", str, to_find);
	printf("moi:%s\n", ft_strstr(str, to_find));
	printf("eux:%s\n", strstr(str, to_find));
	return(0);
}