#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *str1, char *str2);

int	main(void)
{
	char	str1[] = "Hello world";
	char	str2[] = "Hello world";
	char	str3[] = "HellO world";
	char	str4[] = "Hello";

	printf("----------\n");
	printf("Actual function says:\t %d\n", strcmp(str1, str2));
	printf("Your function says: \t %d\n", ft_strcmp(str1, str2));
	printf("----------\n");
	printf("Actual function says:\t %d\n", strcmp(str1, str3));
	printf("Your function says: \t %d\n", ft_strcmp(str1, str3));
	printf("----------\n");
	printf("Actual function says:\t %d\n", strcmp(str3, str1));
	printf("Your function says: \t %d\n", ft_strcmp(str3, str1));
	printf("----------\n");
	printf("Actual function says:\t %d\n", strcmp(str1, str4));
	printf("Your function says: \t %d\n", ft_strcmp(str1, str4));
}
