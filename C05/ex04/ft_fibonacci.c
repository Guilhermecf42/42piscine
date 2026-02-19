/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 12:51:47 by guicarva          #+#    #+#             */
/*   Updated: 2026/02/16 11:27:31 by guicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1);
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index -2));
}
// 
// #include <stdio.h>
// 
// int	main(void)
// {
// 	printf("%i\n", ft_fibonacci(20));
// 	return (0);
// }