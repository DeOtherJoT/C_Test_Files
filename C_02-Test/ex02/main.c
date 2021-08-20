#include <stdio.h>

int	ft_str_is_alpha(char *c);

int	main(void)
{
	int retSpecial, retAlpha, retSpace;
	char Alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char Spec[] = "ABC!@#$123";
	char Null[] = "";

	retSpecial = ft_str_is_alpha(Spec);
	retAlpha = ft_str_is_alpha(Alpha);
	retSpace = ft_str_is_alpha(Null);

	printf("Alphabet array should be 1 and returns:\t%d\n", retAlpha);
	printf("Special array should be 0 and returns:\t%d\n", retSpecial);
	printf("Empty array should be 1 and returns:\t%d\n", retSpace);
	return (0);
}
