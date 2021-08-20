#include <stdio.h>

int	ft_iterative_power(int nb, int pwr);

int main(void)
{
	printf("6 ^ -6 is %d\n", ft_iterative_power(6, -6));
	printf("6 ^ 0 is %d\n", ft_iterative_power(6, 0));
	printf("4 ^ 5 is %d\n", ft_iterative_power(4, 5));
	printf("0 ^ 0 is %d\n", ft_iterative_power(0, 0));
	return (0);
}
