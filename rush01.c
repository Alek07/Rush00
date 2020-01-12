
void	ft_putchar(char c);

void	print_last(int a)
{
	int j;

	j = 1;
	while (j <= a)
	{
		if (j == 1)
			ft_putchar('\\');
		else if (j == a)
			ft_putchar('/');
		else
			ft_putchar('*');
		j++;
	}
	ft_putchar('\n');
}

void print_mid(int a)
{
	int j;

	j = 1;
	while (j <= a)
	{
		if (j == 1 || j == a)
			ft_putchar('*');
		else
			ft_putchar(' ');
		j++;
	}
	ft_putchar('\n');
}

void	rush(int a, int b)
{
	int i;
	int j;

	i = 1;
	while (i <= b)
	{
		if (i == 1)
		{
			j = 1;
			while (j <= a)
			{
				if (j == 1)
					ft_putchar('/');
				else if (j == a)
					ft_putchar('\\');
				else
					ft_putchar('*');
				j++;
			}
			ft_putchar('\n');
		}
		else if (i == b)
			print_last(a);
		else
			print_mid(a);
		i++;
	}
}
