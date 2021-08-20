#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int *range;
	int min[] = {5, 1, 0, 3};
	int max[] = {-6, 1, 6, 14};
	int ret;

	for (int x = 0; x < 4; x++)
	{
		printf("min = %d max = %d\n", min[x], max[x]);
		ret = ft_ultimate_range(&range, min[x], max[x]);
		printf("Returned value: %d\n", ret);
		printf("Created array: ");
		for (int i = 0; i < (max[x] - min[x]); i++)
		{
			printf("%d ", range[i]);
		}
		printf("\n\n");

	}
	return (0);
}
