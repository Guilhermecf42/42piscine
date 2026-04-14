/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 18:43:44 by guicarva          #+#    #+#             */
/*   Updated: 2026/04/14 21:24:10 by guicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		div[0] = a / b;
		mod[0] = a % b;
	}
}
// 
// #include <stdio.h>
//
// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	div;
// 	int	mod;
//
// 	a = 33;
// 	b = 0;
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("resulta: %i\n", div);
// 	printf("resto: %i\n", mod);
// 	return (0);
// }