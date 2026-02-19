/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 10:29:33 by guicarva          #+#    #+#             */
/*   Updated: 2026/02/14 13:01:56 by guicarva         ###   ########.fr       */
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
// 	int	t;
//
// 	t = ft_strlen("123456789");
// 	printf("%d\n", t);
// 	return (0);
// }