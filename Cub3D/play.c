/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   play.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 12:37:14 by resther           #+#    #+#             */
/*   Updated: 2020/10/09 17:35:34 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void			pixel_put(t_base *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->len_line + x * (data->bpp / 8));
	*(unsigned int*)dst = color;
}

static int		init(t_goray *ray, t_ma *map)
{
	int			i;
	t_sprite	*sprite;

	sprite = NULL;
	i = 0;
	if (!(ray->buff_x = (double*)malloc(sizeof(double) * map->x)))
		return (0);
	ray->x_hero = (double)map->player_x + 0.5;
	ray->y_hero = (double)map->player_y + 0.5;
	ray->x_dstdlt = 0;
	ray->y_dstdlt = 0;
	count_sprite(ray, map, sprite);
	find_dir(ray, map);
	return (1);
}

static void		init_key(t_goray *ray)
{
	ray->but.w = 0;
	ray->but.s = 0;
	ray->but.a = 0;
	ray->but.d = 0;
	ray->but.left = 0;
	ray->but.right = 0;
	ray->but.esc = 0;
	ray->fast = 0.1;
}

static int		windows_in(t_vars *vars, t_base *img, t_ma *map, char *str)
{
	vars->mlx = mlx_init();
	mlx_get_screen_size(vars->mlx, &map->x, &map->y);
	if (!main_parser(map, str))
		return (0);
	vars->win = mlx_new_window(vars->mlx, map->x, map->y, "Cub3D");
	img->img = mlx_new_image(vars->mlx, map->x, map->y);
	img->addr = mlx_get_data_addr(img->img, &img->bpp,\
	&img->len_line, &img->last);
	return (1);
}

int				play(char **argv, int argc)
{
	t_base		img;
	t_vars		vars;
	t_ma		map;
	t_goray		ray;

	if (windows_in(&vars, &img, &map, argv[1]) == 0)
		return (0);
	if (init(&ray, &map) == 0)
		return (0);
	init_key(&ray);
	ray.ma = &map;
	ray.pic = &img;
	ray.vars = &vars;
	if (!(tex_get(&ray)))
		return (0);
	cf_draw(&ray, &img);
	raycasting(&map, &img, &ray);
	if (argc == 3)
		return (source(&ray, &img));
	mlx_put_image_to_window(vars.mlx, vars.win, img.img, 0, 0);
	main_key(&ray, &vars);
	mlx_loop(vars.mlx);
	return (0);
}
