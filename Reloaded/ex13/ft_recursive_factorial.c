/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 21:31:43 by guicarva          #+#    #+#             */
/*   Updated: 2026/04/16 23:04:10 by guicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	long long	res;

	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	res = (long long)ft_recursive_factorial(nb - 1) * (long long)nb;
	if (res > __INT_MAX__)
		return (0);
	return (res);
}
