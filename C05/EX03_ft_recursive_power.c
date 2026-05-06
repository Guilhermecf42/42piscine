/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EX03_ft_recursive_power.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 12:18:34 by guicarva          #+#    #+#             */
/*   Updated: 2026/05/06 21:41:57 by guicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	res = 1;
	if (power > 0)
		res = ft_recursive_power(nb, power - 1);
	res = res * nb;
	return (res);
}

// #include <stdio.h>
// 
// int	main(void)
// {
// 	printf("%i\n", ft_recursive_power(5, 0));
// 	return (0);
// }