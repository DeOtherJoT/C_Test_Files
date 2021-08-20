#include <stdio.h>

char **ft_split(char *str, char *charset);

int	main(void)
{
	char **array;
	char str[] = "Why0Did1I2Think3This0123Was03A30Good1231312312312 Idea?";
	char sep[] = "0123";

	array = ft_split(str, sep);
	if (array == NULL)
		return (0);
	while (*array != 0)
	{
		printf("%s\n", *array);
		array++;
	}
	return (0);
}
