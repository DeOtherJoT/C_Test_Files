#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char str1[11] = "Hello";
	char str2[] = "World";
	char str3[11] = "Hello";
	char str4[] = "World";
	void *ptr1;
	void *ptr2;

	printf("----------\n\n");
	printf("BEFORE:\n");
	printf("Destination string before:\t%s\n", str1);
	printf("Source string before:     \t%s\n\n", str2);
	
	printf("----------\n\n");
	printf("Actual function at nb = 4 does:\n");
	ptr1 = strncat(str1, str2, 4);
	printf("Destination string after:\t%s\n", str1);
	printf("Source string after:     \t%s\n", str2);
	printf("Returned pointer:        \t%s\n\n", ptr1);
	
	printf("----------\n\n");
	printf("Your function at nb = 4 does:\n");
	ptr2 = ft_strncat(str3, str4, 4);
	printf("Destination string after:\t%s\n", str3);
	printf("Source string after:     \t%s\n", str4);
	printf("Returned pointer:        \t%s\n\n", ptr2);
}
