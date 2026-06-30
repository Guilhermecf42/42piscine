#include <stdlib.h>

char	**ft_split(char *str)
{
	char	**matrix;
	int		i;
	int		j;
	int		x;

	matrix = malloc(sizeof(char *) * 1000);
	if (!matrix)
		return (NULL);
	i = 0;
	x = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (!str[i])
			break ;
		matrix[x] = malloc(sizeof(char) * 1000);
		if (!matrix[x])
			return (NULL);
		j = 0;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
		{
			matrix[x][j] = str[i];
			j++;
			i++;
		}
		matrix[x][j] = '\0';
		x++;
	}
	matrix[x] = NULL;
	return (matrix);
}
