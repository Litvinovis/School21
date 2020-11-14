SRCS =	./direction.c \
		./fc_draw.c \
		./screenshot.c \
		./main.c \
		./manage_keys_help.c \
		./manage_keys.c \
		./parsing_par.c \
		./parsing_colour.c \
		./parsing_map_utils.c \
		./parsing_map.c \
		./parsing_texture_utils.c \
		./parsing_texture.c \
		./parsing.c \
		./play.c \
		./mes_error.c \
		./raycasting_add.c \
		./raycasting.c \
		./sprite_draw.c \
		./sprites_main.c \
		./struct_init.c \
		./gnl/get_next_line.c \
		./gnl/get_next_line_utils.c \
		./libft/ft_atoi.c \
		./libft/ft_bzero.c \
		./libft/ft_isdigit.c \
		./libft/ft_putstr_fd.c \
		./libft/ft_split.c \
		./libft/ft_strdup.c \
		./libft/ft_strjoin.c \
		./libft/ft_strlen.c \
		./libft/ft_strncmp.c

NAME = cub3D
GCC_FLAG = -Wall -Werror -Wextra
CC = gcc $(GCC_FLAG)

OBJS = $(SRCS:.c=.o)

all: libft minilibx $(NAME)
	@cp ./mlx/libmlx.dylib ./

libft:
	make -C libft/

minilibx:
	make -C mlx/

$(%.o): $(%.c)
	$(CC) -o $@ -c $^

$(NAME): $(OBJS)
	$(CC) -o $@ $^ -Lmlx/ -lmlx -framework OPENGL -framework Appkit -Llibft
	@echo  "make complete!"

clean:
	rm -f $(OBJS)
	make -C libft/ clean
	make -C mlx/ clean

fclean: clean
	rm -f $(NAME)
	make -C libft/ fclean
	make -C mlx/ clean
	@rm -f libmlx.dylib
	@echo  "fclean complete!"

re: fclean all
