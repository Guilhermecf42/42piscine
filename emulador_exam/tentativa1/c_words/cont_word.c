
#include <stdlib.h>
#include <unistd.h>

int	wordcounts(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			i++;
		if (str[i])
		{
			while (str[i] && !(str[i] == 32 || (str[i] >= 9 && str[i] <= 13)))
				i++;
			count++;
		}
	}
	return (count);
}
char	*strdupli(char *str, int len)
{
	char	*dest;
	int		i;

	dest = malloc(sizeof(char) * (len + 1));
	if (dest == 0)
		return (0);
	i = -1;
	while (++i < len)
		dest[i] = str[i];
	return (dest);
}
void	wordfill(char *str, char **dest)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			i++;
		if (str[i])
		{
			j = 0;
			while (str[i + j] && !(str[i + j] == 32 || (str[i + j] >= 9 && str[i + j] <= 13)))
				j++;
			dest[count] = strdupli(&str[i], j);
			count++;
			i = i + j;
		}
	}
}
char	**ft_split(char *str)
{
	int		strs_tam;
	char	**dest;

	strs_tam = wordcounts(str);
	dest = malloc(sizeof(char *) * (strs_tam + 1));
	if (dest == 0)
		return (0);
	dest[strs_tam] = 0;
	wordfill(str, dest);
	return (dest);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	int		ac;
	int		i;
	char	**av;

	i = 0;
	if (argc == 2)
	{
		av = ft_split(argv[1]);
		ac = wordcounts(argv[1]);
		while (i < ac)
		{
			printf("%s\n", av[i]);
			i++;
		}
	}
	return (0);
}
