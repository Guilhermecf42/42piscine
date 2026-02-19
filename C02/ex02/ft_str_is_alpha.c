/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 17:04:23 by guicarva          #+#    #+#             */
/*   Updated: 2026/02/16 11:23:25 by guicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'z' || (str[i] < 'a' && str[i] > 'Z'))
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
// 	printf("%d\n", ft_str_is_alpha("a"));
// 	printf("%d\n", ft_str_is_alpha("9*#@$ "));
// 	printf("%d\n", ft_str_is_alpha(""));
// 	return (0);
// }