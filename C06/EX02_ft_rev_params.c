/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 17:40:06 by guicarva          #+#    #+#             */
/*   Updated: 2026/02/14 17:48:32 by guicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i2;

	while (argc > 1)
	{
		argc--;
		i2 = 0;
		while (argv[argc][i2])
		{
			write(1, &argv[argc][i2], 1);
			i2++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
