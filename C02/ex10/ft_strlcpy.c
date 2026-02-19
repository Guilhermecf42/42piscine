/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 13:34:28 by guicarva          #+#    #+#             */
/*   Updated: 2026/02/16 11:25:59 by guicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
		j++;
	if (size == 0)
		return (j);
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (j);
}
// 
// #include <stdio.h>
// 
// int	main(void)
// {
// 	unsigned int n;
// 	char src[] = "012345678912345";
// 	char dest[20];
// 
// 	n = 10;
// 	printf("%d\n", ft_strlcpy(dest, src, n));
// 	printf("%s\n", src);
// 	printf("%s\n", dest);
// 	return (0);
// }