#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char str[] = "Hell\no this is a \ttest.";

	ft_putstr_non_printable(str);
	return (0);
}
