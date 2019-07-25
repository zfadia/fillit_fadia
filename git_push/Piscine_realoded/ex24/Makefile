# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zfadia <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/19 15:45:35 by zfadia            #+#    #+#              #
#    Updated: 2019/04/19 22:19:11 by zfadia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c \
      srcs/ft_swap.c
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
TARGET = libft.a

all:
	gcc -Iincludes -c $(SRC)
	ar rc $(TARGET) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(TARGET)

re:	fclean all
