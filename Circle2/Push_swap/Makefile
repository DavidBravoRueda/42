NAME        = push_swap
CC          = cc
CFLAGS      = -Wall -Wextra -Werror
RM          = rm -f

SRC         = main.c start.c stack.c split.c utils.c utils_extra.c position.c \
              cost.c do_moves.c sort.c sort_three.c push.c swap.c rotate.c reverse_rotate.c

OBJ         = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
