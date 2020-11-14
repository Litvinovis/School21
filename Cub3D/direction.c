/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   direction.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:01:03 by resther           #+#    #+#             */
/*   Updated: 2020/09/28 19:38:29 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

static int	move_skip(t_ma *map, int y, int x)
{
	if (map->map[y][x] == ' ' || map->map[y][x] == '0'
	|| map->map[y][x] == 'N' || map->map[y][x] == 'S' || map->map[y][x] == 'W'
		|| map->map[y][x] == 'E')
		return (1);
	return (0);
}

void		frontmovemanage(t_goray *ray)
{
	if (ray->but.w)
	{
		if (move_skip(ray->ma, (int)ray->y_hero,\
		(int)(ray->x_hero + ray->x_dr * 0.11)))
			ray->x_hero += ray->x_dr * ray->fast;
		if (move_skip(ray->ma, (int)(ray->y_hero + ray->y_dr * 0.11),\
		(int)ray->x_hero))
			ray->y_hero += ray->y_dr * ray->fast;
	}
	if (ray->but.s)
	{
		if (move_skip(ray->ma, (int)ray->y_hero,\
		(int)(ray->x_hero - ray->x_dr * 0.11)))
			ray->x_hero -= ray->x_dr * ray->fast;
		if (move_skip(ray->ma, (int)(ray->y_hero - ray->y_dr * 0.11),\
		(int)ray->x_hero))
			ray->y_hero -= ray->y_dr * ray->fast;
	}
}

void		sidemove_manage(t_goray *ray)
{
	if (ray->but.a)
	{
		if (move_skip(ray->ma, (int)ray->y_hero,\
		(int)(ray->x_hero - ray->x_fly * 0.11)))
			ray->x_hero -= ray->x_fly * ray->fast;
		if (move_skip(ray->ma, (int)(ray->y_hero - ray->y_fly * 0.11),\
		(int)ray->x_hero))
			ray->y_hero -= ray->y_fly * ray->fast;
	}
	if (ray->but.d)
	{
		if (move_skip(ray->ma, (int)ray->y_hero,\
		(int)(ray->x_hero + ray->x_fly * 0.11)))
			ray->x_hero += ray->x_fly * ray->fast;
		if (move_skip(ray->ma, (int)(ray->y_hero + ray->y_fly * 0.11),\
		(int)ray->x_hero))
			ray->y_hero += ray->y_fly * ray->fast;
	}
}

void		arrows_manage(t_goray *ray)
{
	if (ray->but.left)
		side_l(ray);
	if (ray->but.right)
		side_r(ray);
}
