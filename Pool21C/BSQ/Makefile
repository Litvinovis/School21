# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jalvaro <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/19 17:32:26 by jalvaro           #+#    #+#              #
#    Updated: 2020/02/26 23:14:23 by resther          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRC = src/

HEADER = include/

FILES =  $(SRC)ft_putchar.c $(SRC)ft_putstr.c $(SRC)display.c $(SRC)ft_algoritm.c $(SRC)ft_atoi.c $(SRC)ft_putnbr.c $(SRC)ft_strlen.c $(SRC)main.c $(SRC)reader.c

.PHONY: all clean fclean re

all: 
	gcc -Werror -Wextra -Wall $(FILES) -I $(HEADER) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
