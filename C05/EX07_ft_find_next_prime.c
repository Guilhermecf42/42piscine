/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EX07_ft_find_next_prime.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 19:10:14 by guicarva          #+#    #+#             */
/*   Updated: 2026/05/06 21:42:25 by guicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 2)
		return (2);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i++ == 0)
		{
			nb++;
			i = 2;
		}
		i++;
	}
	return (nb);
}

// #include <stdio.h>
// 
// int	main(void)
// {
// 	printf("%i\n", ft_find_next_prime(2));
// 	return (0);
// }