/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 21:25:26 by guicarva          #+#    #+#             */
/*   Updated: 2026/04/16 23:04:04 by guicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	long long	res;

	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	res = 1;
	while (nb > 0)
	{
		res = res * (long long)nb--;
		if (res > __INT_MAX__)
			return (0);
	}
	return (res);
}
