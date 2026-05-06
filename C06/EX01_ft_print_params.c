/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 17:09:03 by guicarva          #+#    #+#             */
/*   Updated: 2026/02/14 17:38:41 by guicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i1;
	int	i2;

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
