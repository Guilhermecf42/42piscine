/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 12:27:59 by guicarva          #+#    #+#             */
/*   Updated: 2026/02/16 10:30:31 by guicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
//
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	f;
	int	t;

	i = 0;
	f = size - 1;
	while (i < f)
	{
		t = tab[i];
		tab[i] = tab[f];
		tab[f] = t;
		i++;
		f--;
	}
}
// 
// #include <stdio.h>
//
// int	main(void)
// {
// 	int	*arr;
// 	int	i;
// 	int	size;
//
// 	arr = (int []){1, 2, 3, 4, 5};
// 	size = 5;
// 	ft_rev_int_tab(arr, size);
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%d, ", arr[i]);
// 		i++;
// 	}
// }