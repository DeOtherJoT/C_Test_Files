#include <stdio.h>
#include <limits.h>

int ft_find_next_prime(int nb);

int main(void)
{
	int n0 = -42;
	int n1 = 0;
	int n2 = 1;
	int n3 = 2;
	int n4 = 6;
	int n5 = 50;
	int n6 = INT_MAX - 5;
	int n7 = INT_MAX;

	printf("Nb = %d returns: %d\n", n0, ft_find_next_prime(n0));
	printf("Nb = %d returns: %d\n", n1, ft_find_next_prime(n1));
	printf("Nb = %d returns: %d\n", n2, ft_find_next_prime(n2));
	printf("Nb = %d returns: %d\n", n3, ft_find_next_prime(n3));
	printf("Nb = %d returns: %d\n", n4, ft_find_next_prime(n4));
	printf("Nb = %d returns: %d\n", n5, ft_find_next_prime(n5));
	printf("Nb = %d returns: %d\n", n6, ft_find_next_prime(n6));
	printf("Nb = %d returns: %d\n", n7, ft_find_next_prime(n7));
}
