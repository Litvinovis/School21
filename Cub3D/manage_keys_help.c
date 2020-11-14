/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_keys_help.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 12:59:36 by resther           #+#    #+#             */
/*   Updated: 2020/09/28 19:38:29 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int			press_esc(t_goray *ray)
{
	mlx_destroy_window(ray->vars->mlx, ray->vars->win);
	clear_m(ray->ma);
	clear_r(ray);
	exit(0);
}

void		side_l(t_goray *ray)
{
	double drx_last;
	double dry_last;

	drx_last = ray->x_dr;
	ray->x_dr = ray->x_dr * cos(-0.05) - ray->y_dr * sin(-0.05);
	ray->y_dr = drx_last * sin(-0.05) + ray->y_dr * cos(-0.05);
	dry_last = ray->x_fly;
	ray->x_fly = ray->x_fly * cos(-0.05) - ray->y_fly * sin(-0.05);
	ray->y_fly = dry_last * sin(-0.05) + ray->y_fly * cos(-0.05);
}

void		side_r(t_goray *ray)
{
	double old_x_dr;
	double old_x_fly;

	old_x_dr = ray->x_dr;
	ray->x_dr = ray->x_dr * cos(0.05) - ray->y_dr * sin(0.05);
	ray->y_dr = old_x_dr * sin(0.05) + ray->y_dr * cos(0.05);
	old_x_fly = ray->x_fly;
	ray->x_fly = ray->x_fly * cos(0.05) - ray->y_fly * sin(0.05);
	ray->y_fly = old_x_fly * sin(0.05) + ray->y_fly * cos(0.05);
}
