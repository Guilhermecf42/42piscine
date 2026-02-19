

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	tab_ascii[256];

	if (argc == 3)
	{
		i = 0;
		while (i <= 256)
			tab_ascii[i++] = 0;
		i = 0;
		while (argv[1][i])
		{
			if (tab_ascii[(unsigned char)argv[1][i]] == 0)
			{
				write(1, &argv[1][i], 1);
				tab_ascii[(unsigned char)argv[1][i]] = 1;
			}
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			if (tab_ascii[(unsigned char)argv[2][i]] == 0)
			{
				write(1, &argv[2][i], 1);
				tab_ascii[(unsigned char)argv[2][i]] = 1;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
