/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raycasting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 13:00:35 by resther           #+#    #+#             */
/*   Updated: 2020/09/30 14:47:46 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void		find_dir(t_goray *ray, t_ma *map)
{
	ray->x_dr = 0;
	ray->y_dr = 0;
	ray->x_fly = 0;
	ray->y_fly = 0;
	if (map->pos_player == 'N')
	{
		ray->y_dr = -1;
		ray->x_fly = tan(M_PI * FOV / 360);
	}
	else if (map->pos_player == 'S')
	{
		ray->y_dr = 1;
		ray->x_fly = -tan(M_PI * FOV / 360);
	}
	else if (map->pos_player == 'W')
	{
		ray->x_dr = -1;
		ray->y_fly = -tan(M_PI * FOV / 360);
	}
	else if (map->pos_player == 'E')
	{
		ray->x_dr = 1;
		ray->y_fly = tan(M_PI * FOV / 360);
	}
}

static void	find_step(t_goray *ray)
{
	if (ray->y_drray < 0)
	{
		ray->y_move = -1;
		ray->y_dst = (ray->y_hero - ray->y_ma) * ray->y_dstdlt;
	}
	else
	{
		ray->y_move = 1;
		ray->y_dst = (1.0 + ray->y_ma - ray->y_hero) * ray->y_dstdlt;
	}
	if (ray->x_drray < 0)
	{
		ray->x_move = -1;
		ray->x_dst = (ray->x_hero - ray->x_ma) * ray->x_dstdlt;
	}
	else
	{
		ray->x_move = 1;
		ray->x_dst = (1.0 + ray->x_ma - ray->x_hero) * ray->x_dstdlt;
	}
}

static void	find_wall(t_goray *ray, t_ma *map)
{
	ray->hil = 0;
	while (!ray->hil)
	{
		if (ray->x_dst < ray->y_dst)
		{
			ray->x_dst += ray->x_dstdlt;
			ray->x_ma += ray->x_move;
			ray->bro_wall = (ray->x_drray < 0) ? 2 : 3;
		}
		else
		{
			ray->y_dst += ray->y_dstdlt;
			ray->y_ma += ray->y_move;
			ray->bro_wall = (ray->y_drray < 0) ? 0 : 1;
		}
		if (!pix_skip(map, ray->y_ma, ray->x_ma))
			ray->hil = 1;
	}
	if (ray->bro_wall > 1)
		ray->dst_wall = ((ray->x_ma - ray->x_hero + (1 - ray->x_move) \
				/ 2) / ray->x_drray);
	else
		ray->dst_wall = ((ray->y_ma - ray->y_hero + (1 - ray->y_move) \
				/ 2) / ray->y_drray);
}

void		raycasting(t_ma *map, t_base *img, t_goray *ray)
{
	int			x;

	x = 0;
	while (x < map->x)
	{
		ray->xcam = 2 * x / (double)map->x - 1;
		ray->x_drray = ray->x_dr + ray->x_fly * ray->xcam;
		ray->y_drray = ray->y_dr + ray->y_fly * ray->xcam;
		if (!ray->y_drray)
			ray->x_dstdlt = 0;
		else
			ray->x_dstdlt = (!ray->x_drray) ? 1 : fabs(1 / ray->x_drray);
		if (!ray->x_drray)
			ray->y_dstdlt = 0;
		else
			ray->y_dstdlt = (!ray->y_drray) ? 1 : fabs(1 / ray->y_drray);
		ray->x_ma = (int)ray->x_hero;
		ray->y_ma = (int)ray->y_hero;
		find_step(ray);
		find_wall(ray, map);
		map_paint(ray, map, img, x);
		ray->buff_x[x++] = ray->dst_wall;
	}
	manage_sprite(ray);
}
