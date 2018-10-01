/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: begruget <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/06 09:41:56 by begruget     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/06 10:48:08 by begruget    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putnbr(2);
			ft_putnbr(147483648);
		}
		else
			ft_putnbr(-nb);
	}
	else if (nb >= 0 && nb <= 9)
		ft_putchar(nb + 48);
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
int	main (void)
{
	int	nb = -23;

	while (nb < 6)
	{
		ft_putnbr(nb);
		ft_putchar('\n');
		nb++;
	}
	ft_putnbr(-2147483648);
	nb = -12;
	while ( nb <= 12)
	{
		ft_putnbr(nb);
		ft_putchar('\n');
		nb++;
	}
	return(0);
}
