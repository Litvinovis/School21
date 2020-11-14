/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_keys.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 12:59:18 by resther           #+#    #+#             */
/*   Updated: 2020/09/28 19:38:29 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int			press_key(int keycode, t_goray *ray)
{
	if (keycode == KEY_W || keycode == KEY_FORWARD)
		ray->but.w = 1;
	if (keycode == KEY_S || keycode == KEY_BACKWARD)
		ray->but.s = 1;
	if (keycode == KEY_A)
		ray->but.a = 1;
	if (keycode == KEY_D)
		ray->but.d = 1;
	if (keycode == KEY_LEFT)
		ray->but.left = 1;
	if (keycode == KEY_RIGHT)
		ray->but.right = 1;
	if (keycode == KEY_ESC)
	{
		mlx_destroy_window(ray->vars->mlx, ray->vars->win);
		clear_m(ray->ma);
		clear_r(ray);
		exit(0);
	}
	return (0);
}

int			key_release(int keycode, t_goray *ray)
{
	if (keycode == KEY_W || keycode == KEY_FORWARD)
		ray->but.w = 0;
	if (keycode == KEY_S || keycode == KEY_BACKWARD)
		ray->but.s = 0;
	if (keycode == KEY_A)
		ray->but.a = 0;
	if (keycode == KEY_D)
		ray->but.d = 0;
	if (keycode == KEY_LEFT)
		ray->but.left = 0;
	if (keycode == KEY_RIGHT)
		ray->but.right = 0;
	if (keycode == KEY_ESC)
		ray->but.esc = 0;
	return (0);
}

static void	key_manage(t_goray *ray)
{
	if (ray->but.w || ray->but.s)
		frontmovemanage(ray);
	if (ray->but.a || ray->but.d)
		sidemove_manage(ray);
	if (ray->but.left || ray->but.right)
		arrows_manage(ray);
}

int			control_key(t_goray *ray)
{
	key_manage(ray);
	mlx_destroy_image(ray->vars->mlx, ray->pic->img);
	ray->pic->img = mlx_new_image(ray->vars->mlx, ray->ma->x, ray->ma->y);
	ray->pic->addr = mlx_get_data_addr(ray->pic->img,\
		&ray->pic->bpp, &ray->pic->len_line, &ray->pic->last);
	cf_draw(ray, ray->pic);
	raycasting(ray->ma, ray->pic, ray);
	mlx_put_image_to_window(ray->vars->mlx, ray->vars->win,\
		ray->pic->img, 0, 0);
	return (0);
}

void		main_key(t_goray *ray, t_vars *vars)
{
	mlx_hook(vars->win, 2, 1L << 0, press_key, ray);
	mlx_hook(vars->win, 3, 1L << 1, key_release, ray);
	mlx_hook(vars->win, 17, 1L << 17, press_esc, ray);
	mlx_loop_hook(vars->mlx, control_key, ray);
}
