#include <unistd.h>
#include <limits.h>

void	ft_putnbr(int nb);

int	main(void)
{
	ft_putnbr(INT_MIN);
	write(1, "\n", 1);
	ft_putnbr(-42);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(42);
	write(1, "\n", 1);
	ft_putnbr(4246253);
	write(1, "\n", 1);
	ft_putnbr(INT_MAX);
}
