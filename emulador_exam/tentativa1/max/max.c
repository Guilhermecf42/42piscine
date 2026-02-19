
int	max(int *tab, unsigned int len)
{
	unsigned int	i;
	unsigned int	j;
	int				tmp;

	if (*tab == 0)
		return (0);
	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (tab[len - 1]);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int arr[] = {};
// 	unsigned int size;

// 	size = sizeof(arr) / sizeof(int);
// 	printf("%d, ", max(arr, size));
// }