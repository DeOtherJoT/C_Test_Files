#include <stdio.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char str1[] = "Hello World";
	char str2[] = "";

	printf("Copying Hello World: %s\n", ft_strdup(str1));
	printf("Copying an empty str:%s\n", ft_strdup(str2));
}
