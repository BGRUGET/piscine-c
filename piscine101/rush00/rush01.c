void	ft_putchar(char c);

void	ft_print_first_line(int x, int col)
{
	while (col <= x)
	{
		if (col == 1)
			ft_putchar('/');
		else if (col > 1 && col < x)
			ft_putchar('*');
		else
			ft_putchar('\\');
		col++;
	}
	ft_putchar('\n');
}

void	ft_print_middle(int x, int col)
{
	while (col <= x)
	{
		if (col == 1 || col == x)
			ft_putchar('*');
		else
			ft_putchar(' ');
		col++;
	}
	ft_putchar('\n');
}

void	ft_print_last_line(int x, int col)
{
	while (col <= x)
	{
		if (col == 1)
			ft_putchar('\\');
		else if (col > 1 && col < x)
			ft_putchar('*');
		else
			ft_putchar('/');
		col++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int		col;
	int		ligne;

	ligne = 1;
	col = 1;
	while (ligne <= y && y > 0 && x > 0)
	{
		if (ligne == 1)
			ft_print_first_line(x, col);
		else if (ligne > 1 && ligne < y)
			ft_print_middle(x, col);
		else
			ft_print_last_line(x, col);
		ligne++;
	}
}