/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   atoi.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: begruget <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/03 15:30:26 by begruget     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/03 16:05:04 by begruget    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int i;
	int sign;
	long res;

	sign = 1;
	res = 0;
	i = 0;
	while( str[i] == '\t' || str[i] == '\v' || str[i] == '\n' || str[i] == '\r' || str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '+' && str[i + 1] != '-')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str [i] >= '0'  && str[i] <= '9')
	{
		res = (res + str[i] - 48) * 10; 
		i++;
	}
	return ((res*sign)/10); 
}

int	main()
{
	char str[] = "-98ern";
	printf("mon atoi rend %d\n", ft_atoi(str));
	printf("%d", atoi(str));
	return(0);
}
