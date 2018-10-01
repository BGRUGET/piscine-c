#include <unistd.h>
	
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
		else
		ft_putchar(nb + 48);
}

int	ft_atoi(char *str)
{
	int i;
	long res;

	i = 0;
	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res + (str[i] - '0')) * 10;
		i++;
	}
	return (res / 10);
}

int ft_is_prime(int nb)
{
	int i;

	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>
int	main(int ac, char **av)
{
	int nb;
	int i;
	int j;

	nb = ft_atoi(av[1]);
	i = 2;
	j = 0;
	if (ac == 2 && nb > 0)
	{
		while (i <= nb)
		{
			if (ft_is_prime(i) == 1)
				j = j + i;
			i++;	
		}
		ft_putnbr(j);
	}
	else
		ft_putchar('\n');
	return (0);
}
