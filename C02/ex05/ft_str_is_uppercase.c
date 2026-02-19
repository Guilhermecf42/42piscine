/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 08:09:25 by guicarva          #+#    #+#             */
/*   Updated: 2026/02/16 11:24:12 by guicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
// 
// #include <stdio.h>
// 
// int	main(void)
// {
// 	printf("%d\n", ft_str_is_uppercase("54564646"));
// 	printf("%d\n", ft_str_is_uppercase("AJKAGFJKHGDJK"));
// 	printf("%d\n", ft_str_is_uppercase("Aahsgdhjagdhga"));
// 	return (0);
// }