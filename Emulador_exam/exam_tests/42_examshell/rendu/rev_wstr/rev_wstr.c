#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str;
	int		len;
	int		i;

	if (argc > 1)
	{
		str = argv[1];
		len = 0;
		i = 0;
		while (str[i])
			i++;
		i--

	}
	write(1, "\n", 1);
	return (0);
}
