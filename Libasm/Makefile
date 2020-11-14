# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: resther <resther@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/02 12:27:28 by resther           #+#    #+#              #
#    Updated: 2020/10/16 18:04:54 by resther          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = 		ft_strdup.s \
			ft_strlen.s \
			ft_strcpy.s \
			ft_strcmp.s \
			ft_write.s \
			ft_read.s

TEST_NAME = test

BNS_SRC =	ft_list_size.s

TEST_SRC =	main.c

CC =	gcc

RM =	rm -f

CFLAGS =	-Wall -Wextra -Werror

NAME =	libasm.a

TOBJ =	$(TEST_SRC:%.c=%.o)

BOBJ =	$(BNS_SRC:%.s=%.o)

OBJ =	$(SRC:%.s=%.o)

%.o : %.s
	nasm -f macho64 $< -o $@
%.o : %.c
	$(CC) $(CFLAGS) $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	@echo '	                      '
	@echo '	/""""""""""""\Библиотека к бою готова'
	@echo '	/"""""""""""""""""""\ '
	@echo '	\_@_@_@_@_@_@_@_@_@_/ '
	@echo '	                      '

bonus: $(OBJ) $(BOBJ)
	ar rc $(NAME) $(OBJ) $(BOBJ)
	@echo '	                      '
	@echo '	/""""""""""""\Библиотека с бонусом к бою готова'
	@echo '	/"""""""""""""""""""\ '
	@echo '	\_@_@_@_@_@_@_@_@_@_/ '
	@echo '	                      '

test: 
	$(CC) $(CFLAGS) -c $(TEST_SRC) -o $(TOBJ)
	$(CC) $(CFLAGS) $(TOBJ) $(NAME) -o $(TEST_NAME)

clean:
	$(RM) $(OBJ) $(TEST_NAME)

fclean: clean
		$(RM) $(NAME) $(BOBJ) $(TOBJ)
		@echo '	                      '
		@echo Oчистка завершена
		@echo '	                      '

re: fclean all

.PHONY = all bonus clean fclean re test
