#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	for (int i = 0; i < 9; i++)
	printf("%d ", ft_fibonacci(i));
	return (0);
}
