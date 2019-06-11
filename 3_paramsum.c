#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n < 10)
	{
		ft_putchar(n + '0');
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		argv[1] = "1";
		ft_putnbr(argc - 1);
		write(1, "\n", 1);
	}
	else
		write(1, "0\n", 2);
	return (0);
}
