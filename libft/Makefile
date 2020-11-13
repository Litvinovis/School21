# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: resther <resther@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/22 11:48:46 by resther           #+#    #+#              #
#    Updated: 2020/05/24 12:50:44 by resther          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = libft.h

FILES = ft_atoi ft_bzero ft_calloc ft_isalnum ft_isalpha	\
ft_isascii ft_isdigit ft_isprint ft_itoa ft_memccpy			\
ft_memchr ft_memcmp ft_memcpy ft_memmove ft_memset			\
ft_putchar_fd ft_putendl_fd ft_putstr_fd ft_putnbr_fd		\
ft_split ft_strchr ft_strdup ft_strjoin ft_strlcat			\
ft_strlcpy ft_strlen ft_strmapi ft_strncmp ft_strnstr		\
ft_strrchr ft_strtrim ft_substr ft_toupper ft_tolower

BONUS = ft_lstadd_back ft_lstadd_front ft_lstclear	\
ft_lstdelone ft_lstiter ft_lstlast ft_lstmap				\
ft_lstnew ft_lstsize

SRC = $(FILES:=.c)

BONUS_SRC = $(BONUS:=.c)

OBJ = $(FILES:=.o)

BONUS_OBJ = $(BONUS:=.o)

.PHONY: all clean fclean re bonus

all: $(NAME) $(SRC)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib libft.a

$(OBJ): %.o: %.c $(HEADER)
	gcc -c -Wall -Werror -Wextra $< -o $@


bonus: $(OBJ) $(BONUS_OBJ)
	ar rc $(NAME) $(BONUS_OBJ) $(OBJ)
	ranlib libft.a

$(BONUS_OBJ): %.o: %.c
	gcc -c -Wall -Werror -Wextra $< -o $@

clean: 
	rm -f $(OBJ) $(BONUS_OBJ)
	
fclean: clean
	rm -f libft.a

re: fclean all