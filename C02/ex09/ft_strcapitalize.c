/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 11:25:27 by guicarva          #+#    #+#             */
/*   Updated: 2026/02/16 11:25:46 by guicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[i] != 0)
	{
		if ((str[i] < '0' || str[i] > 'z' || (str[i] > '9' && str[i] < 'A')
				|| (str[i] > 'Z' && str[i] < 'a')) && (str[i + 1] >= 'a'
				&& str[i + 1] <= 'z'))
			str[i + 1] = str[i + 1] - 32;
		i++;
	}
	return (str);
}
// 
// #include <stdio.h>

// int	main(void)
// {
// 	char a[] = "ola, TUDO bem? 42palavras :quarenta-e-duas; cinquenta+e+um";

// 	printf("%s\n", ft_strcapitalize(a));
// 	return (0);
// }