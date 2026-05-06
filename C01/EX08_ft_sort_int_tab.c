/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EX08_ft_sort_int_tab.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 19:11:51 by guicarva          #+#    #+#             */
/*   Updated: 2026/05/06 21:34:28 by guicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

// #include <stdio.h>
// 
// int	main(void)
// {
// 	int	arr[] = {'0', 060, 0x30};
// 	int	i;
// 	int	size;
// 
// 	size = sizeof(arr) / sizeof(int);
// 	ft_sort_int_tab(arr, size);
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%d, \n", arr[i]);
// 		i++;
// 	}
// }