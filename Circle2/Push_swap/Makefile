
NAME = push_swap

DEF_COLOR =	\033[0;39m
GRAY =		\033[0;90m
RED =		\033[0;91m
GREEN =		\033[0;92m
YELLOW =	\033[0;93m
BLUE =		\033[0;94m
MAGENTA =	\033[0;95m
CYAN =		\033[0;96m
WHITE =		\033[0;97m
BLACK =		\033[0;99m
ORANGE =	\033[38;5;209m
BROWN =		\033[38;2;184;143;29m
DARK_GRAY =	\033[38;5;234m
MID_GRAY =	\033[38;5;245m
DARK_GREEN = 	\033[38;2;75;179;82m
DARK_YELLOW =	\033[38;5;143m

SRCS = main.c \
       cost.c do_moves.c position.c \
       push.c reverse_rotate.c \
       split.c rotate.c sort_three.c sort.c \
       stack.c start.c swap.c utils.c

INCLUDE = ./push_swap.h

cc = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

%.o: %.c
	@echo "${BLUE} ◎ $(YELLOW)compiling ${RED}→	$(GREEN)$< $(DEF_COLOR)"
	@${cc} ${CFLAGS} -c $< -o $@
