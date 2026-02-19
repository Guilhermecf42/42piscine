/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 13:23:16 by guicarva          #+#    #+#             */
/*   Updated: 2026/02/16 11:27:06 by guicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		baset;
	long	n;

	baset = check_base(base);
	if (baset < 2)
		return ;
	n = nbr;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= baset)
		ft_putnbr_base(n / baset, base);
	write(1, &base[n % baset], 1);
}
// 
// #include <stdio.h>
// 
// int	main(void)
// {
// 	char	a[] = "0123456789ABCDEF";
// 
// 	ft_putnbr_base(58, a);
// 	write(1, "\n", 1);
// 	return (0);
// }