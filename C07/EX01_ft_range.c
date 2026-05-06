/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EX01_ft_range.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 09:25:13 by guicarva          #+#    #+#             */
/*   Updated: 2026/05/06 21:46:49 by guicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*dest;
	int	i;

	if (min >= max)
		return (0);
	dest = malloc(sizeof(int) * (max - min));
	if (!dest)
		return (NULL);
	i = 0;
	while (min < max)
	{
		dest[i] = min;
		min++;
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// 
// int	main(void)
// {
// 	int	min;
// 	int	max;
// 	int	*str;
// 	int	i;
// 
// 	min = -5;
// 	max = 15;
// 	str = ft_range(min, max);
// 	i = 0;
// 	while (i < max - min)
// 	{
// 		printf("%d, ", str[i]);
// 		i++;
// 	}
// 	return (0);
// }