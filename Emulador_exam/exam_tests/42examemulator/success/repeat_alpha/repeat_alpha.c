
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	len;

	if (argc == 2)
	{
		i = -1;
		while (argv[1][++i])
		{
			if (argv[1][i] >= 'b' && argv[1][i] <= 'z')
				len = argv[1][i] - 'a';
			else if (argv[1][i] >= 'B' && argv[1][i] <= 'Z')
				len = argv[1][i] - 'A';
			else
				len = 0;
			while (len > 0)
			{
				write(1, &argv[1][i], 1);
				len--;
			}
			write(1, &argv[1][i], 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
