#include <stdio.h>
#include <limits.h>

void ft_putnbr_base(int nbr, char *base);

int main(void)
{
	printf("Printing pattern:\nExpected value\nYour value\n\n");

	printf("123456789\n");
	ft_putnbr_base(123456789, "0123456789");
	printf("\n\n");

	printf("%d\n", INT_MIN);
	ft_putnbr_base(INT_MIN, "0123456789");
	printf("\n\n");

	printf("75BCD15\n");
	ft_putnbr_base(123456789, "0123456789ABCDEF");
	printf("\n\n");

	printf("111010110111100110100010101\n");
	ft_putnbr_base(123456789, "01");
	printf("\n\n");

	printf("ipciackiiiui\n");
	ft_putnbr_base(INT_MAX, "pikachu");
	printf("\n\n");

	printf("Now for some empty lines.\n");
	ft_putnbr_base(123456789, "a");
	printf("1\n");
	ft_putnbr_base(123456789, "");
	printf("2\n");
	ft_putnbr_base(123456789, "25+");
	printf("3\n");
	ft_putnbr_base(123456789, "46-");
	printf("4\n");
	ft_putnbr_base(123456789, "4\t76");
	printf("5\n");
	ft_putnbr_base(123456789, "detective");
	printf("6\n");
	ft_putnbr_base(123456789, "4 67");
	printf("7\n");
	return (0);
}
