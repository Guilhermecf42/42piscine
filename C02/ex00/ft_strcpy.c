/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 08:51:51 by guicarva          #+#    #+#             */
/*   Updated: 2026/02/16 11:22:34 by guicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
// 
// #include <stdio.h>
// 
// int	main(void)
// {
// 	char	*a;
// 	char	b[30];

// 	a = "abc123 ?!@#$%^&*()";
// 	printf("%s\n", ft_strcpy(b, a));
// 	return (0);
// }