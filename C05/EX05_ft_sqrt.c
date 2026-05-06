/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EX05_ft_sqrt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 17:38:12 by guicarva          #+#    #+#             */
/*   Updated: 2026/05/06 21:42:13 by guicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i <= nb / i)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// 
// int	main(void)
// {
// 	printf("%i\n", ft_sqrt(16));
// 	return (0);
// }