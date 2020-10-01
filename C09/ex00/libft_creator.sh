# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldenis <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/29 18:06:36 by ldenis            #+#    #+#              #
#    Updated: 2020/09/30 19:52:50 by ldenis           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

gcc -Wall -Wextra -Werror  -c $*"ft_putchar.c" $*"ft_swap.c" $*"ft_putstr.c" $*"ft_strlen.c" $*"ft_strcmp.c"

ar -rc libft.a "ft_putchar.o" "ft_swap.o" "ft_putstr.o" "ft_strlen.o" "ft_strcmp.o"
