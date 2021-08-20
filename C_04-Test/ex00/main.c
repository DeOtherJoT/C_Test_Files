#include <stdio.h>
#include <string.h>

int		ft_strlen(char *str);

int		main (void)
{
	char str[] = "BlahBlah";

	printf("Answer should be %d, given answer: %d\n", (int)strlen(str), ft_strlen(str));
}
