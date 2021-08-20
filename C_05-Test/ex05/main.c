#include <stdio.h>
#include <limits.h>

int	ft_sqrt(int nb);

int	main(void)
{
	printf("Square root of 100 is:        %d\n", ft_sqrt(100));
	printf("Square root of 10 is:         %d\n", ft_sqrt(10));
	printf("Square root of 2147395600 is: %d\n", ft_sqrt(2147395600));
	printf("Square root of %d is:         %d\n", INT_MAX, ft_sqrt(INT_MAX));
	printf("Square root of -42 is:        %d\n", ft_sqrt(-42));
	return (0);
}
