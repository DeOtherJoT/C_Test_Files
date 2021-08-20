#include <stdio.h>
#include <string.h>

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
	char dest1[15] = "Hello";
	char dest2[15] = "Hello";
	char src[] = "World";
	unsigned int n = 8;

	printf("---------------\n\n");
	printf("BEFORE\n");
	printf("Destinaton string:\t%s\n", dest1);
	printf("Source string:    \t%s\n\n", src);

	printf("---------------\n\n");
	//printf("First, consider if n is lesser than the dest string length.\n");
	printf("Actual function returns %d and dest is:\t%s\n", (int)strlcat(dest1, src, n), dest1);
	printf("Your function returns %d and dest is  :\t%s\n\n", ft_strlcat(dest2, src, n), dest2);
}
