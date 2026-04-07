NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = main.c start.c stack.c split.c utils.c \
      position.c cost.c do_moves.c sort.c sort_three.c \
      push.c swap.c rotate.c reverse_rotate.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
