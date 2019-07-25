# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zfadia <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/19 22:23:51 by zfadia            #+#    #+#              #
#    Updated: 2019/04/19 22:24:12 by zfadia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	main.c

OBJ =	main.o

TARGET = ft_display_file

all:
	gcc -Wall -Werror -Wextra -c $(SRC) -I includes
	gcc $(OBJ) -o $(TARGET)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(TARGET)

re:	fclean all
