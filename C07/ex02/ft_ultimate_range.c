/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 09:25:31 by guicarva          #+#    #+#             */
/*   Updated: 2026/02/19 13:07:21 by guicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	size = max - min;
	if (min >= max)
	{
		range[0] = NULL;
		return (0);
	}
	range[0] = malloc(sizeof(int) * (size));
	if (range[0] == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		range[0][i] = min + i;
		i++;
	}
	return (size);
}
// 
// #include <stdio.h>
// 
// int	main(void)
// {
// 	int	i;
// 	int	*range;
// 	int	size;
// 
// 	size = ft_ultimate_range(&range, 0, 100);
// 	printf("%d\n", size);
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%d, ", range[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }