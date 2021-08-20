#include <stdio.h>


void	ft_div_mod(int a, int b, int *div, int *mod);


int		main(void)

{

	int a  = 0;

	int b  = 0;

	int *div = &a;

	int *mod = &b;


	ft_div_mod(5, 2, div, mod);

	

	printf("Value of a is : %d",*div);

	printf("\nValue of b is : %d",*mod);

}
