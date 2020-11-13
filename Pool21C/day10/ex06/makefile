# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: resther <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/17 18:42:28 by resther           #+#    #+#              #
#    Updated: 2020/02/17 19:40:50 by resther          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

OUT = do-op

SRC = doop.c

all: $(NAME)

&(NAME):
	gcc - a &(NAME) -I &(INCLUDES)
	ar rc &(NAME) *.o
	ranlib &(NAME)

clean:
	/bin/rm -f *.c

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
