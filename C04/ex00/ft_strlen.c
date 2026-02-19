/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 08:13:44 by guicarva          #+#    #+#             */
/*   Updated: 2026/02/11 08:20:41 by guicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
//
// #include <stdio.h>
//
// int	main(void)
// {
// 	printf("%d\n", ft_strlen("mundo"));
// 	return (0);
// }