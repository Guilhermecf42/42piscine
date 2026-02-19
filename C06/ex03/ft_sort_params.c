/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 17:59:56 by guicarva          #+#    #+#             */
/*   Updated: 2026/02/14 22:51:59 by guicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	sort_strs(char **strs, int size)
{
	int	i;
	int	i1;
	char	*temp;

	i = 0;
	while (i < size)
	{
		i1 = i + 1;
		while (i1 < size)
		{
			if (ft_strcmp(strs[i], strs[i1]) > 0)
			{
				temp = strs[i];
				strs[i] = strs[i1];
				strs[i1] = temp;
			}
			i1++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i1;
	int	i2;

	if (argc > 2)
		sort_strs(argv + 1, argc - 1);
	i1 = 1;
	while (i1 < argc)
	{
		i2 = 0;
		while (argv[i1][i2])
		{
			write(1, &argv[i1][i2], 1);
			i2++;
		}
		write(1, "\n", 1);
		i1++;
	}
	return (0);
}
