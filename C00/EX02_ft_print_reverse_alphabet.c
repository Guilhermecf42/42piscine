/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EX02_ft_print_reverse_alphabet.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 09:39:55 by guicarva          #+#    #+#             */
/*   Updated: 2026/05/06 21:32:08 by guicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = '\172';
	while (c >= '\141')
	{
		write(1, &c, 1);
		c--;
	}
}

// int main(void)
// {
// 	ft_print_reverse_alphabet();
// 	return(0);
// }