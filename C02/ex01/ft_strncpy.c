/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 09:55:47 by guicarva          #+#    #+#             */
/*   Updated: 2026/02/16 11:22:59 by guicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
// 
// #include <stdio.h>
// 
// int	main(void)
// {
// 	unsigned int	n;
// 	char			*src;
// 	char			dest[11];
// 
// 	src = "1234567890";
// 	n = 2;
// 	printf("%s\n", ft_strncpy(dest, src, n));
// 	return (0);
// }