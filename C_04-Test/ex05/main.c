#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	printf("Printing format\nExpected\nYour output\n");
	printf("\n");
	printf("123456789\n");
	printf("%d\n", ft_atoi_base("75BCD15", "0123456789ABCDEF"));
	printf("\n");
	printf("12345\n");
	printf("%d\n", ft_atoi_base("11000000111001", "01"));
	printf("\n");
	printf("-23425235\n");
	printf("%d\n", ft_atoi_base("-131270323", "01234567"));
	printf("\n");
	printf("12345\n");
	printf("%d\n", ft_atoi_base("   12345", "0123456789"));
	printf("\n");
	printf("-12345\n");
	printf("%d\n", ft_atoi_base("-+---+-12345", "0123456789"));
	printf("\n");
	printf("123\n");
	printf("%d\n", ft_atoi_base("   123x45", "0123456789"));
	printf("\n");
	printf("Now for invalid inputs.\n");
	printf("1. %d\n", ft_atoi_base("redf", "0123456789"));
	printf("2. %d\n", ft_atoi_base("12345", "0123+456789"));
	printf("3. %d\n", ft_atoi_base("12345", "01234516789"));
	printf("4. %d\n", ft_atoi_base("12345", "012-3456789"));
	printf("5. %d\n", ft_atoi_base("12345", " 0123456789"));
	printf("6. %d\n", ft_atoi_base("12345", "0123\n456789"));
}
