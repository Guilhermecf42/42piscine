/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 07:51:29 by guicarva          #+#    #+#             */
/*   Updated: 2026/02/16 11:23:41 by guicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
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
// 	printf("%d\n", ft_str_is_numeric("54564646"));
// 	printf("%d\n", ft_str_is_numeric("9 &"));
// 	printf("%d\n", ft_str_is_numeric("Aahsgdhjagdhga"));
// 	return (0);
// }