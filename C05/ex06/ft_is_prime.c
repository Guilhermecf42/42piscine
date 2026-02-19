/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 18:21:30 by guicarva          #+#    #+#             */
/*   Updated: 2026/02/13 07:49:44 by guicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
		if (nb % i++ == 0)
			return (0);
	return (1);
}
//
// #include <stdio.h>
//
// int	main(void)
// {
// 	printf("%i\n", ft_is_prime(97));
// 	return (0);
// }