/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 12:32:21 by resther           #+#    #+#             */
/*   Updated: 2020/10/01 12:46:25 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include "libft/libft.h"
# include "mlx/mlx.h"
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <math.h>
# include <sys/types.h>
# include "gnl/get_next_line.h"

# define KEY_W			13
# define KEY_A			0
# define KEY_S			1
# define KEY_D			2
# define KEY_LEFT		123
# define KEY_RIGHT		124
# define KEY_FORWARD 	126
# define KEY_BACKWARD	125
# define KEY_ESC		53

# define FOV			66
# define STEPV			128
# define O_RDONLY		0x0000
# define O_WRONLY		0x0001
# define O_RDWR			0x0002
# define O_ACCMODE		0x0003

typedef struct		s_vars
{
	void			*mlx;
	void			*win;
}					t_vars;

typedef struct		s_base
{
	void			*img;
	char			*addr;
	int				bpp;
	int				len_line;
	int				last;
	int				hei;
	int				broad;
}					t_base;

typedef struct		s_ma
{
	char			**str;
	int				x;
	int				y;
	int				cou;
	char			*no;
	char			*so;
	char			*we;
	char			*ea;
	char			*s;
	unsigned long	rgb_f;
	unsigned long	rgb_c;
	char			**map;
	char			pos_player;
	char			*line_map;
	int				y_c;
	int				x_c;
	int				player_x;
	int				player_y;
	double			player_a;
}					t_ma;

typedef struct		s_sprite
{
	int				num;
	double			x;
	double			y;
	double			dista;
	int				check;
	struct s_sprite	*sp_next;
	struct s_sprite	*sp_prev;
}					t_sprite;

typedef struct		s_cou
{
	int				r;
	int				q;
	int				check;
}					t_cou;

typedef struct		s_sprait
{
	double			x_spr;
	double			y_spr;
	double			det_inv;
	double			x_change;
	double			y_change;
	int				x_spr_src;
	int				src_v_mv;
	int				h_spr;
	int				y_start;
	int				x_start;
	int				y_end;
	int				x_end;
	int				x_te;
	int				y_te;
	int				b_sp;
}					t_sprait;

typedef struct		s_butt
{
	int				w;
	int				a;
	int				s;
	int				d;
	int				esc;
	int				left;
	int				right;
}					t_butt;

typedef struct		s_draw
{
	double			x_wall;
	int				x_te;
	int				y_te;
	int				h_te;
	int				w_te;
	double			move;
	double			pos_te;
}					t_draw;

typedef struct		s_goray
{
	double			xcam;
	double			x_dr;
	double			y_dr;
	double			x_fly;
	double			y_fly;
	double			x_dst;
	double			y_dst;
	double			x_dstdlt;
	double			y_dstdlt;
	double			x_drray;
	double			y_drray;
	double			x_hero;
	double			y_hero;
	double			fast;
	int				x_ma;
	int				y_ma;
	int				x_move;
	int				y_move;
	int				bro_wall;
	double			dst_wall;
	int				he_wall;
	int				frst_wall;
	int				fin_wall;
	int				hil;
	t_base			*pic;
	t_ma			*ma;
	t_vars			*vars;
	double			time_fps;
	double			fast_step;
	double			fast_turn;
	double			curr_tm;
	double			last_tm;
	t_base			no_tex;
	t_base			so_tex;
	t_base			we_tex;
	t_base			ea_tex;
	t_base			spr_te;
	t_butt			but;
	t_sprite		*sprite;
	double			*buff_x;
}					t_goray;

int					newmaplist(t_ma *map);
int					is_digit(char *str);
void				f_skip_spaces(char *line, int *i);
int					atoicub(char *line, int *i);
void				ft_putstr_fd(char *s, int fd);
int					check_ea(char *line, t_ma *map);
int					check_we(char *line, t_ma *map);
int					check_so(char *line, t_ma *map);
int					check_no(char *line, t_ma *map);
int					check_s(char *line, t_ma *map);
int					tex_get(t_goray *ray);
void				frontmovemanage(t_goray *ray);
void				sidemove_manage(t_goray *ray);
void				arrows_manage(t_goray *ray);
void				count_sprite(t_goray *ray, t_ma *ma, t_sprite *sprite);
void				manage_sprite(t_goray *ray);
void				paint_sprite(t_goray *ray, t_sprite *sprite_data);
int					check_f(char *line, t_ma *map);
int					check_c(char *line, t_ma *map);
void				find_dir(t_goray *ray, t_ma *map);
void				raycasting(t_ma *map, t_base *img, t_goray *ray);
int					pix_colour(t_base *img, int x, int y);
int					pix_skip(t_ma *map, int y, int x);
t_sprite			*sprite_next(int y, int x);
void				sprite_add(t_sprite *sprite, int y, int x, int id);
int					isalone(char *line);
int					main_parser(t_ma *map, char *argv);
void				line_free(char **words);
void				free_char(char *line);
int					tex_check(char *line, t_ma *map);
int					parsing_par(char *line, t_ma *map, int fd);
int					parsing_map(t_ma *map);
int					go_parser_map(char *line, t_ma *map, int fd);
int					start_final(char *line, t_ma *map);
int					map_parsing_line(char *line, t_ma *map);
int					count_words(char **str);
int					source(t_goray *ray, t_base *img);
int					press_key(int keycode, t_goray *ray);
int					key_release(int keycode, t_goray *ray);
int					control_key(t_goray *ray);
void				main_key(t_goray *ray, t_vars *vars);
int					press_esc(t_goray *ray);
void				side_l(t_goray *ray);
void				side_r(t_goray *ray);
void				pixel_put(t_base *data, int x, int y, int color);
int					play(char **argv, int argc);
void				clear_r(t_goray *ray);
void				clear_m(t_ma *ma);
int					error_mes(t_ma *ma, char *line, int code);
void				map_paint(t_goray *ray, t_ma *map, t_base *img, int x);
void				cf_draw(t_goray *ray, t_base *img);
void				free_char(char *line);
int					parsing_par(char *line, t_ma *map, int fd);

#endif
