# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldenis <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/26 17:26:07 by ldenis            #+#    #+#              #
#    Updated: 2020/09/27 23:39:35 by ldenis           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

SRC = main.c
FLAGS = -Wall -Wextra -Werror
CC = gcc

all : $(NAME)

$(NAME) :
	@$(CC) $(FLAGS) -o $(NAME) $(SRC)
	@echo "Compilation effectuee"

fclean :
	@rm -f $(NAME)
	@rm -f *.o
	@echo "Executable supprime"

re : fclean
	all

norme :
	@norminette -R CheckForbiddenSourceHeader
	@norminette -R CheckDefine
