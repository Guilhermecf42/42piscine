/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 10:31:58 by guicarva          #+#    #+#             */
/*   Updated: 2026/02/10 19:33:21 by guicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (dest[i])
		i++;
	while (src[j] != 0 && j < nb)
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
// 	unsigned int nb;
//
// 	nb = 4;
// 	src = "World";
// 	printf("%s\n", ft_strncat(dest, src, nb));
// 	return (0);
// }