NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

INCLUDES = -I ./includes
SRCS = ft_printf.c ft_percent.c ft_putchar.c ft_puthex.c ft_putint.c ft_putpointer.c ft_putstr.c ft_putunsigned.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
.PHONY: all clean fclean re
