/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 11:15:30 by guicarva          #+#    #+#             */
/*   Updated: 2026/02/16 11:25:34 by guicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
// 
// #include <stdio.h>
// 
// int	main(void)
// {
// 	char	a[] = "54564646";
// 	char	b[] = "AAAAAAAAAAAAAAAAA";
// 	char	c[] = "AGSHAGDGadgjkahdas";
// 
// 	printf("%s\n", ft_strlowcase(a));
// 	printf("%s\n", ft_strlowcase(b));
// 	printf("%s\n", ft_strlowcase(c));
// 	return (0);
// }