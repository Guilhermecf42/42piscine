
int	max(int *tab, unsigned int len)
{
	unsigned int	i;
	int				dest;

	if (*tab == 0)
		return (0);
	i = 1;
	dest = tab[0];
	while (i < len - 1)
	{
		
		if (dest <= tab[i])
			dest = tab[i];
		i++;
	}
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	int arr[] = {1, 8 , 8, 023, 8, 5, 1};
	unsigned int size;

	size = sizeof(arr) / sizeof(int);
	printf("%d, ", max(arr, size));
}