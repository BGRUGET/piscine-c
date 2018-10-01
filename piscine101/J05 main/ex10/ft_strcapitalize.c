/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcapitalize.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: begruget <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/07 00:57:44 by begruget     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/07 02:00:58 by begruget    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] < '0' || (str[i - 1] > '9' && str[i - 1] < 'A')
				|| (str[i - 1] > 90 && str[i] < 97) || str[i - 1] > 'z')
				str[i] = str[i] - 32;
			str[i] = str[i];
		}
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

	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("moi: %s\n", ft_strcapitalize(str));
	
	return(0);
}