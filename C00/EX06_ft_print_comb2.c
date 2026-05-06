/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 08:39:58 by guicarva          #+#    #+#             */
/*   Updated: 2026/02/16 10:24:51 by guicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	writef(char c, char d)
{
	write(1, &c, 1);
	write(1, &d, 1);
	if (!(c == '9' && d == '9'))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	char	c;
	char	d;

	while (c <= '9')
	{
		while (d <= '9')
		{
			writef(a, b);
			c++;
		}
	}
}
