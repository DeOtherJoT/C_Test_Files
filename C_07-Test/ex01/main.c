#include <stdio.h>

int	*ft_range(int min, int max);

int main(void)
{
	int min[] = {5, 1, 0, 4, 3};
	int max[] = {2, 1, 5, 5, 13};
	int *range;
	int i = 0;
	int j;

	while (i < 5)
	{
		printf("min = %d, max = %d\n", min[i], max[i]);
		printf("Created array: ");
		range = ft_range(min[i], max[i]);
		j = 0;
		while (j < (max[i] - min[i]))
		{
			printf("%d ", range[j]);
			j++;
		}
		printf("\n\n");
		i++;
	}
	return (0);
}
