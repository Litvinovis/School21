# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: resther <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/17 11:07:14 by resther           #+#    #+#              #
#    Updated: 2020/02/17 20:43:10 by resther          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_strcmp srcs/ft_swap srcs/ft_strlen srcs/ft_putstr

OUT = ft_putchar.o ft_strcmp.o ft_swap.o ft_strlen.o ft_putstr.o

INCLUDES = includes/

all: $(NAME)

&(NAME):
	gcc -Wall -Wextra -Werror -c &(NAME) -I &(INCLUDES)
	ar rc &(NAME) *.o
	ranlib &(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
