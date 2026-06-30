
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	n;
	int	i;

	if (argc == 2)
	{
		n = atoi(argv[1]);
		if (n == 1)
			printf("1");
		else
		{
			i = 2;
			while (n >= i)
			{
				if (n % i == 0)
				{
					printf("%d", i);
					if (n != i)
						printf("*");
					n = n / i;
					i--;
				}
				i++;
			}
		}
	}
	printf("\n");
	return (0);
}
