NAME = libft.a

FLAG = -Wall -Wextra -Werror

FILES = ft_isdigit.c \
		ft_strncpy.c\
		ft_strcat.c \
		ft_strcpy.c \
		ft_strncat.c\
		ft_strdup.c \
		ft_strlen.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_isdigit.c \
 		ft_strcat.c \
 		ft_strncat.c \
 		ft_strrchr.c \
 		ft_strcmp.c \
		ft_bzero.c \
 		ft_strchr.c \
 		ft_strstr.c \
 		ft_atoi.c \
 		ft_strnstr.c \
 		ft_toupper.c \
 		ft_tolower.c \
 		ft_memset.c \
 		ft_memalloc.c \
 		ft_memcpy.c \
 		ft_memccpy.c \
 		ft_memchr.c \
 		ft_memmove.c \
		ft_memcmp.c \
		ft_strncmp.c \
		ft_memdel.c \
		ft_strnew.c \
		ft_strdel.c \
		ft_strclr.c \
		ft_striter.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putendl.c \
		ft_striteri.c \
		ft_putnbr.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_strequ.c \
		ft_strnequ.c \
		ft_strsub.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_strsplit.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_itoa.c \
		ft_strlcat.c \
		ft_lstdelone.c \
		ft_lstnew.c \
		ft_lstdel.c \
		ft_lstiter.c \
		ft_lstadd.c \
		ft_dstrnew.c \
		ft_lstmap.c \
		get_next_line.c 
# INCLUDES = includes

INC =	libft.h

OUT = $(FILES:.c=.o)

all: $(NAME)

$(NAME):
	gcc $(FLAG) -c $(FILES) -I $(INC)
	ar rc $(NAME) $(OUT)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OUT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
