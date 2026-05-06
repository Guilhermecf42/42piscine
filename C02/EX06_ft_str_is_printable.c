/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EX06_ft_str_is_printable.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 09:09:23 by guicarva          #+#    #+#             */
/*   Updated: 2026/05/06 21:35:25 by guicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= ' ' && str[i] <= '~'))
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>
// 
// int	main(void)
// {
// 	printf("%d\n", ft_str_is_printable("a 456&^%$@$@$@"));
// 	printf("%d\n", ft_str_is_printable("	\n\t"));
// 	printf("%d\n", ft_str_is_printable("Aahsgdhjagdhga\t"));
// 	return (0);
// }