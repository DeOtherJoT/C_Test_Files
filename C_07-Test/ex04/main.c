#include <stdio.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int main(void)
{
	printf("-10000000000000000000000000000000\n");
	printf("%s\n", ft_convert_base("-20000000000", "01234567", "01"));
	printf("\n");

	printf("2147483647\n");
	printf("%s\n", ft_convert_base("7FFFFFFF", "0123456789ABCDEF", "0123456789"));
	printf("\n");

	printf("0\n");
	printf("%s\n", ft_convert_base("p", "pikachu", "0123456789"));
	printf("\n");

	printf("l\n");
	printf("%s\n", ft_convert_base("0", "pikachu", "lmao"));
	printf("\n");

	printf("-1234\n");
	printf("%s\n", ft_convert_base("-+----4D2", "0123456789ABCDEF", "0123456789"));
	printf("\n");

	printf("1234\n");
	printf("%s\n", ft_convert_base("\n  \t  +-+---4D2abc", "0123456789ABCDEF", "0123456789"));
	printf("\n");

	printf("null 1\n");
	printf("%s\n", ft_convert_base("42", "01234567890", "0123456789"));
	printf("\n");

	printf("null 2\n");
	printf("%s\n", ft_convert_base("42", "0123456789", "0123 456789"));
	printf("\n");

	printf("null 3\n");
	printf("%s\n", ft_convert_base("42", "0123+456789", "0123456789"));
	printf("\n");

	printf("null 4\n");
	printf("%s\n", ft_convert_base("42", "0123456789", "0123\n456789"));
	printf("\n");
	return (0);
}
