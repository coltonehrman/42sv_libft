CC = gcc
CFLAGS = -Wall -Werror -Wextra

SOURCES = ./libft.h
CFILES = *.c

NAME = libft.a

$(NAME):
	$(CC) $(CFLAGS) -c $(CFILES)
	ar rcs $(NAME) *.o
	ranlib $(NAME)

.PHONY: all clean fclean re

all: $(NAME)

clean:
	rm -f *.o

fclean:
	rm -f $(NAME)

re: fclean all
