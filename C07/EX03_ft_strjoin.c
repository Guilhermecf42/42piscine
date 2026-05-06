/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EX03_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 09:25:45 by guicarva          #+#    #+#             */
/*   Updated: 2026/05/06 21:47:00 by guicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i])
		i++;
	while (src[j] != 0)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*strvoid(void)
{
	char	*strvazia;

	strvazia = malloc(sizeof(char) * 1);
	if (strvazia == 0)
		return (0);
	strvazia[0] = 0;
	return (strvazia);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		tamanho;
	char	*dest;

	if (size == 0)
		return (strvoid());
	i = -1;
	tamanho = ft_strlen(sep) * (size - 1);
	while (++i < size)
		tamanho = tamanho + ft_strlen(strs[i]);
	dest = malloc(sizeof(char) * (tamanho + 1));
	if (dest == 0)
		return (strvoid());
	i = -1;
	dest[0] = 0;
	while (++i < size)
	{
		ft_strcat(dest, strs[i]);
		if (i < size - 1)
			ft_strcat(dest, sep);
	}
	return (dest);
}

// #include <stdio.h>
// 
// int	main(void)
// {
// 	char	**strs;
// 	int		size;
// 	char	sep[] = ", ";
// 
// 	strs = (char *[]){"ola", "tudo", "bem"};
// 	size = 3;
// 	printf("%s\n", ft_strjoin(size, strs, sep));
// 	return (0);
// }