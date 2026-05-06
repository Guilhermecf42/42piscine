/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EX00_ft_strcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 18:11:54 by guicarva          #+#    #+#             */
/*   Updated: 2026/05/06 21:35:54 by guicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	printf("%d\n", ft_strcmp("gundo", "mundo"));
// 	return (0);
// }