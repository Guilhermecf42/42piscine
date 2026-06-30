/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 21:07:15 by guicarva          #+#    #+#             */
/*   Updated: 2026/06/27 21:17:34 by guicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		n;
	int		temp;
	char	print;

	if (argc < 2)
	{
		write(1, "0\n", 2);
		return (0);
	}
	n = argc - 1;
	while (n > 0)
	{
		temp = n;
		while (temp >= 10)
			temp = temp / 10;
		print = temp + 48;
		write(1, &print, 1);
		n = n / 10;
	}
	write(1, "\n", 1);
	return (0);
}
