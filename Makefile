# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oexall <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/06/27 07:18:51 by oexall            #+#    #+#              #
#    Updated: 2016/07/01 09:05:45 by ghavenga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=push_swap
CHCK=checker

CC= gcc -o
CFLAGS= -Wall -Werror -Wextra
LIBFT= -L ./libft/ -lft

OPS_SRC= ./Ops/swap.c \
		 ./Ops/push.c \
		 ./Ops/rotate.c \
		 ./Ops/rev_rotate.c \
		 ./Ops/is_sorted.c
PS_SRC= ./Push_Swap/main.c \
		./Push_Swap/sorting.c \
		./Push_Swap/read_stack.c
CR_SRC= ./Checker/main.c \
		./Checker/read_stack.c \
		./Checker/utils.c

all: $(NAME)

$(NAME):
	@clear
	@echo "\x1b[31mCompiling Libft\x1b[0m"
	@echo ".	.	.	"
	@make -C libft fclean
	@make -C libft
	@echo "\x1b[34mDone Compiling Libft\x1b[0m"
	@echo ".	.	.	"
	@echo "\x1b[31mCompiling $(NAME)\x1b[0m"
	@echo ".	.	.	"
	@$(CC) $(NAME) $(CFLAGS) $(PS_SRC) $(OPS_SRC) $(O_SRC) $(LIBFT)
	@echo "\x1b[34mDone Compiling $(NAME)\x1b[0m"
	@echo ".	.	.	"
	@echo "\x1b[31mCompiling $(CHCK)\x1b[0m"
	@echo ".	.	.	"
	@$(CC) $(CHCK) $(CFLAGS) $(CR_SRC) $(OPS_SRC) $(O_SRC) $(LIBFT)
	@echo "\x1b[34mDone Compiling $(NAME)\x1b[0m"
	@echo ".	.	.	"
	@echo "\x1b[32mCompleted All Compiling\x1b[0m"

push:
	@clear
	@echo "\x1b[31mCompiling $(NAME)\x1b[0m"
	@echo ".	.	.	"
	@$(CC) $(NAME) $(CFLAGS) $(PS_SRC) $(OPS_SRC) $(LIBFT)
	@echo "\x1b[32mDone Compiling $(NAME)\x1b[0m"

check:
	@clear
	@echo "\x1b[31mCompiling $(CHCK)\x1b[0m"
	@echo ".	.	.	"
	@$(CC) $(CHCK) $(CFLAGS) $(CR_SRC) $(OPS_SRC) $(LIBFT)
	@echo "\x1b[32mDone Compiling $(CHCK)\x1b[0m"

clean:
	@rm $(NAME)
	@rm $(CHCK)
	@echo "\x1b[32mCompleted Clean\x1b[0m"

fclean: clean
	@make -C libft fclean
	@echo "\x1b[32mCompleted Full Clean\x1b[0m"

re: fclean all

me:
	@echo ${LOGNAME} > author

norm:
	norminette $(OPS_SRC) $(PS_SRC) $(CR_SRC) push_swap.h error.c
