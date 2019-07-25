NAME = fillit

FLAG = -Wall -Wextra -Werror

FILES = parsing_open_stok.c\
		ft_fillit.1.c
		
# INCLUDES = includes

INC =	fillit.h

OUT = $(FILES:.c=.o)

all: $(NAME)

LIBFT =		FILLES/libft/libft.a

$(NAME):
	gcc $(FLAG) -c $(FILES) -I $(INC)
	ar rc $(NAME) $(OUT)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OUT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
