#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char	*strs[] = {"Why", "hello", "there", "General", "Kenobi"};
	char	sep1[] = "--";
	char	sep2[] = "";
	char	sep3[] = " ";
	char	sep4[] = "0123";

	printf("Seperators: %s\n%s\n\n",sep1, ft_strjoin(5, strs, sep1));
	printf("Seperators: %s\n%s\n\n",sep2, ft_strjoin(5, strs, sep2));
	printf("Seperators: %s\n%s\n\n",sep3, ft_strjoin(5, strs, sep3));
	printf("Seperators: %s\n%s\n\n",sep4, ft_strjoin(5, strs, sep4));
	return (0);
}
