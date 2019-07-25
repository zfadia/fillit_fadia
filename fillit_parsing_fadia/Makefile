NAME = fillit

FLAG = -Wall -Wextra -Werror

FILES = parsing_open_stok.c\
		 parsing_open_stok2.c
		

# INCLUDES = includes

INC =	fillit.h

OUT = $(FILES:.c=.o)

all: $(NAME)

LIBFT =		libft/libft.a

$(NAME):
	gcc $(FLAG) ${FILES} ${LIBFT} -I $(INC) -o ${NAME}

clean:
	/bin/rm -f $(OUT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
