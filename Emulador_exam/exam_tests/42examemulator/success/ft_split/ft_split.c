/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 21:19:33 by guicarva          #+#    #+#             */
/*   Updated: 2026/06/27 22:50:24 by guicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_delimited(char str)
{
	if (str == 32)
		return (1);
	else if (str >= 9 && str <= 13)
		return (1);
	else
		return (0);
}

int	cont_word(char *str)
{
	int	cont;

	cont = 0;
	while (*str)
	{
		while (*str && is_delimited(*str))
			str++;
		if (*str)
		{
			cont++;
			while (*str && !is_delimited(*str))
				str++;
		}
	}
	return (cont);
}

char	*get_word(char	*str, int *pos)
{
	int		len;
	int		i;
	char	*word;

	len = 0;
	i = -1;
	while (str[++i] && !is_delimited(str[i]))
		len++;
	*pos = len;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	char	**matrix;
	int		len;
	int		pos;
	int		x;

	len = cont_word(str);
	matrix = malloc(sizeof(char *) * (len + 1));
	if (!matrix)
		return (NULL);
	x = 0;
	while (x < len)
	{
		while (*str && is_delimited(*str))
			str++;
		matrix[x] = get_word(str, &pos);
		str = str + pos;
		x++;
	}
	matrix[x] = NULL;
	return (matrix);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	**matrix;
// 	int		x;
// 	char	*str;

// 	x = 0;
// 	str = "hello word";
// 	matrix = ft_split(str);
// 	while (matrix[x])
// 	{
// 		printf("%s\n", matrix[x]);
// 		x++;
// 	}
// 	return (0);
// }
