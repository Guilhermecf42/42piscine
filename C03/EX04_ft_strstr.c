/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EX04_ft_strstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 10:44:38 by guicarva          #+#    #+#             */
/*   Updated: 2026/05/06 21:36:16 by guicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	f;

	i = 0;
	if (to_find[0] == 0)
		return (str);
	while (str[i] != '\0')
	{
		f = 0;
		while (to_find[f] && to_find[f] == str[i + f])
			if (to_find[++f] == 0)
				return (&str[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	char *str;
// 	char *to_find;
// 
// 	str = "42 is very funny";
// 	to_find = "very";
// 	printf("%s\n", ft_strstr(str, to_find));
// 	return (0);
// }