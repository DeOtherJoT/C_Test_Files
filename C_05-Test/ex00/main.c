#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	int n1 = 0;
	int n2 = 5;
	int n3 = 7;

	printf("-4! should be 0 and is:    %d\n", ft_iterative_factorial(-4));
	printf("%d! should be 1 and is:    %d\n", n1, ft_iterative_factorial(n1));
	printf("%d! should be 120 and is:  %d\n", n2, ft_iterative_factorial(n2));
	printf("%d! should be 5040 and is: %d\n", n3, ft_iterative_factorial(n3));
	return (0);
}
