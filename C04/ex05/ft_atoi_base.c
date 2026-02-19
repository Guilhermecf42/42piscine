/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 17:21:16 by guicarva          #+#    #+#             */
/*   Updated: 2026/02/11 18:33:58 by guicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_base(char *base, char ascii_mapa[256])
{
	int	i;

	i = 0;
	while (i < 256)
		ascii_mapa[i++] = 0;
	i = 0;
	while (base[i])
	{
		if (base[i] == ' ' || (base[i] >= 9 && base[i] <= 13) || base[i] == '+'
			|| base[i] == '-')
			return (0);
		else if (ascii_mapa[(unsigned char)base[i]] != 0)
			return (0);
		ascii_mapa[(unsigned char)base[i]] = i + 1;
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	char	ascii_mapa[256];
	int		tamanho;
	int		sinal;
	int		res;
	int		i;

	tamanho = check_base(base, ascii_mapa);
	if (tamanho < 2)
		return (0);
	sinal = 1;
	res = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sinal *= -1;
		i++;
	}
	while (ascii_mapa[(unsigned char)str[i]] != 0)
		res = (res * tamanho) + ascii_mapa[(unsigned char)str[i++]] - 1;
	return (res * sinal);
}
//
// #include <stdio.h>
//
// int	main(void)
// {
// 	printf("%x\n", ft_atoi_base("7D", "0123456789ABCDEF"));
// 	return (0);
// }