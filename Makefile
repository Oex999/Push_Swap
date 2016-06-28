# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oexall <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/06/27 07:18:51 by oexall            #+#    #+#              #
#    Updated: 2016/06/28 09:24:00 by oexall           ###   ########.fr        #
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
		 ./Ops/rev_rotate.c
PS_SRC= ./Push_Swap/main.c
CR_SRC= ./Checker/main.c
O_SRC= ./error.c

all: $(NAME)

$(NAME):
	@clear
	@echo "Compiling Libft"
	@make -C libft fclean
	@make -C libft
	@echo "Done Compiling Libft"
	@echo "Compiling $(NAME)"
	@$(CC) $(NAME) $(CFLAGS) $(PS_SRC) $(OPS_SRC) $(O_SRC) $(LIBFT)
	@echo "Done Compiling $(NAME)"
	@echo "Compiling $(CHCK)"
	@$(CC) $(CHCK) $(CFLAGS) $(CR_SRC) $(OPS_SRC) $(O_SRC) $(LIBFT)
	@echo "Done Compiling $(NAME)"
	@echo "Completed All Compiling"

push:
	@clear
	@echo "Compiling $(NAME)"
	@$(CC) $(NAME) $(CFLAGS) $(PS_SRC) $(OPS_SRC) $(O_SRC) $(LIBFT)
	@echo "Done Compiling $(NAME)"

check:
	@clear
	@echo "Compiling $(CHCK)"
	@$(CC) $(CHCK) $(CFLAGS) $(CR_SRC) $(OPS_SRC) $(O_SRC) $(LIBFT)
	@echo "Done Compiling $(CHCK)"

clean:
	@rm $(NAME)
	@rm $(CHCK)
	@echo "Completed Clean"

fclean: clean
	@make -C libft fclean
	@echo "Completed Full Clean"

re: fclean all

me:
	@echo ${LOGNAME} > author

norm:
	norminette $(OPS_SRC) $(PS_SRC) $(CR_SRC)