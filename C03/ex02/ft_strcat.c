/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 09:51:40 by guicarva          #+#    #+#             */
/*   Updated: 2026/02/16 11:26:32 by guicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i])
		i++;
	while (src[j] != 0)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
// 
// #include <stdio.h>
//
// int	main(void)
// {
// 	char *src;
// 	char dest[30] = "Hello";
//
// 	src = "World";
// 	printf("%s\n", ft_strcat(dest, src));
// 	return (0);
// }