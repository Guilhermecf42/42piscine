# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guicarva <guicarva@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/15 22:23:36 by guicarva          #+#    #+#              #
#    Updated: 2026/04/16 23:28:48 by guicarva         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

CC=cc

CFLAGS=-Wall -Werror -Wextra -I includes

SRCS=srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
srcs/ft_strlen.c srcs/ft_swap.c

OFILES= ft_putchar.o ft_putstr.o ft_strcmp.o \
ft_strlen.o ft_swap.o
		
all: $(NAME)

$(NAME):
		$(CC) $(CFLAGS) -c $(SRCS) && ar rc $(NAME) $(OFILES) && ranlib $(NAME)

clean:
		/bin/rm -f $(OFILES)
	
fclean: clean
		/bin/rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re