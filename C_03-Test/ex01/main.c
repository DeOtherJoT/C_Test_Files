#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *str1, char *str2, unsigned int n);

int	main(void)
{
	char	str1[] = "Hello world";
	char	str2[] = "Hello Wo";
	char	str3[] = "Hello ";
	char	str4[] = "";
	char	str5[] = "";

	printf("--------------------\n");
	printf("Actual function with n = 6:\t%d\n", strncmp(str1, str2, 6));
	printf("Your function with n = 6:\t%d\n", ft_strncmp(str1, str2, 6));

	printf("--------------------\n");
	printf("Actual function with n = 7:\t%d\n", strncmp(str1, str2, 7));
	printf("Your function with n = 7:\t%d\n", ft_strncmp(str1, str2, 7));
	
	printf("--------------------\n");
	printf("Actual function with n = 8:\t%d\n", strncmp(str1, str2, 8));
	printf("Your function with n = 8:\t%d\n", ft_strncmp(str1, str2, 8));
	
	printf("--------------------\n");
	printf("Actual function with n = 10:\t%d\n", strncmp(str1, str2, 10));
	printf("Your function with n = 10:\t%d\n", ft_strncmp(str1, str2, 10));
	
	printf("--------------------\n");
	printf("Now, null character comparison: \n");
	printf("Actual function with n = 7:\t%d\n", strncmp(str1, str3, 7));
	printf("Your function with n = 7:\t%d\n", ft_strncmp(str1, str3, 7));
	
	printf("--------------------\n");
	printf("Now reverse them: \n");
	printf("Actual function with n = 8:\t%d\n", strncmp(str2, str1, 8));
	printf("Your function with n = 8:\t%d\n", ft_strncmp(str2, str1, 8));
	
	printf("--------------------\n");
	printf("Now for empty strings: \n");
	printf("Actual function with n = 3:\t%d\n", strncmp(str4, str5, 3));
	printf("Your function with n = 3;\t%d\n", ft_strncmp(str4, str5, 3));
	return (0);
}
