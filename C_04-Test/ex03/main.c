#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *c);

int main(void)
{
	printf("%d\n", ft_atoi("-2147483648"));
	printf("%d\n", ft_atoi("     -21345vf"));
	printf("%d\n", ft_atoi("  -+---+-56v73"));
	printf("%d\n", ft_atoi("3245 + 564"));
	printf("%d\n", ft_atoi(""));
	printf("%d\n", ft_atoi("  ---xd"));
	printf("%d\n", ft_atoi("----------435"));
	return (0);
}
