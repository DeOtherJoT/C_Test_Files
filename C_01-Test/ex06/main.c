  

#include <stdio.h>


int		ft_strlen(char *str);


int		main (void)

{

	char str[] = "BlahBlah";


	int count = ft_strlen(str);

	

	printf("Answer should be 8, given answer: %d\n", count);

}
