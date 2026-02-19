/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 13:08:22 by guicarva          #+#    #+#             */
/*   Updated: 2026/02/16 11:26:42 by guicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	s_dest;
	unsigned int	s_src;
	unsigned int	i;

	s_dest = 0;
	while (dest[s_dest] && s_dest < size)
		s_dest++;
	s_src = 0;
	while (src[s_src])
		s_src++;
	if (s_dest >= size)
		return (size + s_src);
	size = size - s_dest;
	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[s_dest + i] = src[i];
		i++;
	}
	dest[s_dest + i] = '\0';
	return (s_dest + s_src);
}
// 
// #include <stdio.h>
//
// int	main(int argc, char **argv)
// {
// 	unsigned int	size;
//
// 	size = 1;
// 	printf("%d\n", ft_strlcat(argv[1], argv[2], size));
// 	printf("%d\n", argc);
// 	return (0);
// }