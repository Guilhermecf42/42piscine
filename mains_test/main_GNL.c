/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_GNL.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 17:46:22 by guicarva          #+#    #+#             */
/*   Updated: 2026/05/24 15:48:45 by guicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

// int	main(void)
// {
// 	int		fd;
// 	char	*line;

// 	fd = open("teste_obrigatorio.fd", O_RDONLY);
// 	if (fd < 0)
// 	{
// 		printf("erro ao abrir o ficheiro!\n");
// 		return (1);
// 	}
// 	while ((line = get_next_line(fd)) != NULL)
// 	{
// 		printf("%s", line);
// 		free(line);
// 	}
// 	close(fd);
// 	return (0);
// }

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("1char.fd", O_RDONLY);
	line = get_next_line(fd);
	printf("linha 1: %s\n", line);
	free(line);
	line = get_next_line(fd);
	printf("linha 2: %s\n", line);
	free(line);
	close(fd);
	return (0);
}

// #include <stdio.h>
// #include <unistd.h>

// int	main(void)
// {
// 	char	buffer[100];
// 	int		bytes;

// 	write(1, "Digite algo: ", 14);

// 	bytes = read(0, buffer, 99);

// 	if (bytes == -1)
// 		return (1);

// 	buffer[bytes] = '\0';

// 	printf("Você digitou: %s\n", buffer);

// 	return (0);
// }

// #include <fcntl.h>
// #include <stdio.h>
// #include <unistd.h>

// int	main(void)
// {
// 	int		fd;
// 	char	buffer[50];
// 	int		bytes;

// 	fd = open("teste_obrigatorio.fd", O_RDONLY);
// 	if (fd == -1)
// 		return (1);
// 	bytes = read(fd, buffer, 49);
// 	if (bytes == -1)
// 		return (1);

// 	buffer[bytes] = '\0';

// 	printf("%s", buffer);

// 	close(fd);

// 	return (0);
// }