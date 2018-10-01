/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: begruget <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/06 11:35:48 by begruget     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/06 11:36:18 by begruget    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		i;
	long	res;
	int		sign;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n' || str[i] == '\r'
			|| str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '+' && str[i + 1] != '-')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res + (str[i] - 48)) * 10;
		i++;
	}
	return ((res * sign) / 10);
}

#include <stdio.h>
#include <stdlib.h>
int main ()
{

	char *str = "+12356--1245654" ;
	printf("%s\nft_atoi %d\natoi %d\n" , str, ft_atoi(str), atoi(str));
	return(0);
} 