# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/30 18:52:33 by vsmolii           #+#    #+#              #
#    Updated: 2019/05/01 18:10:16 by vsmolii          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
GCCW = gcc -Wall -Werror -Wextra
SRC = *.c
LIBFT = ./libft/libft.a
INCLUDES = -I ./includes/printf.h

OBJECT = $(SRC:.c=.o)

RED = \033[0;31m
GREEN = \033[0;32m
BLUE = \033[0;36m

all: $(NAME)

$(NAME):
	@echo "$(GREEN)Making objects files"
	@make -C libft
	@$(GCCW) -c -g $(SRC) $(INCLUDES)
	@ar rc $(NAME) $(OBJECT) ./libft/*.o
	@ranlib $(NAME)
	@echo "$(GREEN)Compiling libftprintf.a"


clean:
	@echo "$(RED)Deleting objects for libftprintf.a"
	@/bin/rm -f $(OBJECT)
	@make -C libft clean

fclean: clean
	@echo "$(RED)Deleting libftprintf.a"
	@/bin/rm -f $(NAME)
	@make -C libft fclean

re: fclean all

