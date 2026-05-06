/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EX04_ft_ultimate_div_mod.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 20:09:28 by guicarva          #+#    #+#             */
/*   Updated: 2026/05/06 21:33:45 by guicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	t1;
	int	t2;

	if (b[0] != 0)
	{
		t1 = a[0];
		t2 = b[0];
		a[0] = t1 / t2;
		b[0] = t1 % t2;
	}
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	int	a;
// 	int	b;
//
// 	a = 33;
// 	b = 2;
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("resultado: %i\n", a);
// 	printf("resto: %i\n", b);
// 	return (0);
// }