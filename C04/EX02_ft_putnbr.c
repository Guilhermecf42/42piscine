/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 08:45:28 by guicarva          #+#    #+#             */
/*   Updated: 2026/05/06 21:31:42 by guicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;
	long	lg;

	lg = nb;
	if (lg < 0)
	{
		write(1, "-", 1);
		lg = -lg;
	}
	if (lg >= 10)
		ft_putnbr(lg / 10);
	c = (lg % 10) + '0';
	write(1, &c, 1);
}

// #include <stdio.h>
// 
// int	main(void)
// {
// 	ft_putnbr(-2147483648);
// 	write(1, "\n", 1);
// 	return (0);
// }