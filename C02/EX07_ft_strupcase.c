/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EX07_ft_strupcase.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 09:19:36 by guicarva          #+#    #+#             */
/*   Updated: 2026/05/06 21:35:29 by guicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>
// 
// int	main(void)
// {
// 	char	a[] = "54564646";
// 	char	b[] = "akdhahdasashakhj";
// 	char	c[] = "AGSHAGDGadgjkahdas";
// 
// 	printf("%s\n", ft_strupcase(a));
// 	printf("%s\n", ft_strupcase(b));
// 	printf("%s\n", ft_strupcase(c));
// 	return (0);
// }