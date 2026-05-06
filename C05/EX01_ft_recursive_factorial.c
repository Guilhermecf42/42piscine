/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EX01_ft_recursive_factorial.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 10:40:24 by guicarva          #+#    #+#             */
/*   Updated: 2026/05/06 21:41:50 by guicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	res = 1;
	if (nb > 1)
		res = ft_recursive_factorial(nb - 1);
	res = res * nb;
	return (res);
}

// #include <stdio.h>
// 
// int	main(void)
// {
// 	printf("%i\n", ft_recursive_factorial(5));
// 	return (0);
// }