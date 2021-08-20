#include <stdio.h>
#include <limits.h>

int	ft_is_prime(int n);

int main(void)
{
	int n0 = -42;
	int n1 = 0;
	int n2 = 1;
	int n3 = 2;
	int n4 = 5;
	int n5 = 42;
	int n6 = INT_MAX;

	printf("Is %d a prime number: %d\n", n0, ft_is_prime(n0));
	printf("Is %d a prime number: %d\n", n1, ft_is_prime(n1));
	printf("Is %d a prime number: %d\n", n2, ft_is_prime(n2));
	printf("Is %d a prime number: %d\n", n3, ft_is_prime(n3));
	printf("Is %d a prime number: %d\n", n4, ft_is_prime(n4));
	printf("Is %d a prime number: %d\n", n5, ft_is_prime(n5));
	printf("Is %d a prime number: %d\n", n6, ft_is_prime(n6));
	return (0);
}
