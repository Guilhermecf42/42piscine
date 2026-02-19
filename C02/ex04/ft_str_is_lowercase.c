/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 08:05:51 by guicarva          #+#    #+#             */
/*   Updated: 2026/02/16 11:23:57 by guicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
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
// 	printf("%d\n", ft_str_is_lowercase("54564646"));
// 	printf("%d\n", ft_str_is_lowercase("A"));
// 	printf("%d\n", ft_str_is_lowercase("fahsgdhjagdhga"));
// 	return (0);
// }