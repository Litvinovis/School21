# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: resther <resther@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/22 16:24:21 by resther           #+#    #+#              #
#    Updated: 2020/07/28 21:55:54 by resther          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FLAGS = -Wall -Werror -Wextra

SOURCE_h = libftprintf.h

SRC_c = ft_printf.c ft_put_space.c ft_arg_change.c ft_fill_arg.c ft_isdigit.c ft_itoa.c ft_itoa_base.c ft_print_procent.c ft_print_c.c ft_print_d.c ft_print_p.c ft_print_s.c ft_print_u.c ft_print_x.c ft_putchar_fd.c ft_putstr_fd.c ft_find_letter.c ft_string_reader.c ft_string_lower.c ft_strdup.c ft_strlen.c ft_substr.c ft_tolower.c ft_which_function.c ft_which_letter.c

.PHONY: all clean fclean re

SRC_obj = $(SRC_c:.c=.o)

all: $(NAME)

$(NAME): $(SRC_obj)
	ar rc $(NAME) $?

$(SRC_obj): %.o: %.c $(SOURSE_h)
	$(CC) -c $(FLAGS) $<

clean:
	rm -f $(SRC_obj)

fclean: clean
	rm -f $(NAME)

re: fclean all