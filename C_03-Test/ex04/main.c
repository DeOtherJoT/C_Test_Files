#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int	main(void)
{
	char haystack[] = "Hello World";
	char needle1[] = "Wo";
	char needle2[] = "";
	char needle3[] = "blah";
	char needle4[] = "l";

	printf("Expected to return: World\n");
	printf("Actual function returns:\t%p\n", strstr(haystack, needle1));
	printf("Your function returns:  \t%p\n\n", ft_strstr(haystack, needle1));

	printf("Expected to return: Hello World\n");
	printf("Actual function returns:\t%p\n", strstr(haystack, needle2));
	printf("Your function returns:  \t%p\n\n", ft_strstr(haystack, needle2));

	printf("Expected to return: <NULL>\n");
	printf("Actual function returns:\t%p\n", strstr(haystack, needle3));
	printf("Your function returns:  \t%p\n\n", ft_strstr(haystack, needle3));

	printf("Expected to return: llo World\n");
	printf("Actual function returns:\t%p\n", strstr(haystack, needle4));
	printf("Your function returns:  \t%p\n\n", ft_strstr(haystack, needle4));
}
