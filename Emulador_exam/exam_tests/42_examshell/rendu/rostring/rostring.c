
#include <unistd.h>

int	ft_isspace(char c)
{
	return (c == ' ' || c == '\t');
}
int	main(int argc, char **argv)
{
	char	*str;
	int		first_word_start;
	int		first_word_end;
	int		has_other_words;
	int		i;

	if (argc > 1)
	{
		str = argv[1];
		i = 0;
		first_word_start = 0;
		first_word_end = 0;
		has_other_words = 0;
		while (str[i] && ft_isspace(str[i]))
			i++;
		if (str[i] && !ft_isspace(str[i]))
		{
			first_word_start = i;
			while (str[i] && !ft_isspace(str[i]))
				i++;
			first_word_end = i;
		}
		while (str[i])
		{
			while (str[i] && ft_isspace(str[i]))
				i++;
			if (str[i] && !ft_isspace(str[i]))
			{
				if (has_other_words == 1)
					write(1, " ", 1);
				while (str[i] && !ft_isspace(str[i]))
				{
					write(1, &str[i], 1);
					i++;
				}
				has_other_words = 1;
			}
		}
		if (first_word_end > 0)
		{
			if (has_other_words == 1)
				write(1, " ", 1);
			while (first_word_start < first_word_end)
			{
				write(1, &str[first_word_start], 1);
				first_word_start++;
			}
		}
		write(1, "\n", 1);
		return (0);
	}
}
