#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char str1[11] = "Hello";
	char str2[] = "World";
	char str3[11] = "Hello";
	char str4[] = "World";
	void *ptr;
	void *testptr;

	printf("-------------\n\n");
	printf("BEFORE\n");
	printf("Destination string:\t%s\n", str1);
	printf("Source string:     \t%s\n\n", str2);

	printf("-------------\n\n");
	printf("Actual function does:\n");
	ptr = strcat(str1, str2);
	printf("Destination string:\t%s\n", str1);
	printf("Source string:     \t%s\n", str2);
	printf("Returned pointer:\t%s\n\n", ptr);

	printf("-------------\n\n");
	printf("Your function does:\n");
	testptr = ft_strcat(str3, str4);
	printf("Destination string:\t%s\n", str3);
	printf("Source string:     \t%s\n", str4);
	printf("Returned pointer:\t%s\n\n", testptr);
}
