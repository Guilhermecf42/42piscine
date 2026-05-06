/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EX01_ft_print_alphabet.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 09:05:53 by guicarva          #+#    #+#             */
/*   Updated: 2026/05/06 21:32:00 by guicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;

	c = '\x61';
	while (c <= '\x7A')
	{
		write(1, &c, 1);
		c++;
	}
}

// int main(void)
// {
// 	ft_print_alphabet();
// 	return(0);
// }