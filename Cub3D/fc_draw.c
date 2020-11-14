/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fc_draw.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 12:58:54 by resther           #+#    #+#             */
/*   Updated: 2020/09/30 14:48:45 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

static void	tex_calc(t_goray *ray, t_draw *paint, t_ma *map)
{
	ray->he_wall = (int)(map->y / ray->dst_wall);
	ray->frst_wall = (map->y / 2 - ray->he_wall / 2);
	if (ray->frst_wall < 0)
		ray->frst_wall = 0;
	ray->fin_wall = (ray->he_wall / 2 + map->y / 2);
	if (ray->fin_wall >= map->y)
		ray->fin_wall = map->y - 1;
	if ((ray->bro_wall == 2 || ray->bro_wall == 3))
		paint->x_wall = ray->y_hero + ray->dst_wall * ray->y_drray;
	else
		paint->x_wall = ray->x_hero + ray->dst_wall * ray->x_drray;
	paint->x_wall -= floor((paint->x_wall));
	paint->x_te = (int)(paint->x_wall * (double)(paint->w_te));
	if (ray->bro_wall == 2 || ray->bro_wall == 1)
		paint->x_te = paint->w_te - paint->x_te - 1;
	paint->move = 1.0 * paint->h_te / ray->he_wall;
	paint->pos_te = (ray->frst_wall - map->y / 2 \
	+ ray->he_wall / 2) * paint->move;
}

static void	calc_h(t_goray *ray, t_draw *paint)
{
	if (ray->bro_wall == 0)
	{
		paint->w_te = ray->so_tex.broad;
		paint->h_te = ray->so_tex.hei;
	}
	else if (ray->bro_wall == 1)
	{
		paint->w_te = ray->no_tex.broad;
		paint->h_te = ray->no_tex.hei;
	}
	else if (ray->bro_wall == 2)
	{
		paint->w_te = ray->ea_tex.broad;
		paint->h_te = ray->ea_tex.hei;
	}
	else if (ray->bro_wall == 3)
	{
		paint->w_te = ray->we_tex.broad;
		paint->h_te = ray->we_tex.hei;
	}
}

void		map_paint(t_goray *ray, t_ma *map, t_base *img, int x)
{
	int		color;
	int		y;
	double	shade;
	t_draw	paint;

	calc_h(ray, &paint);
	tex_calc(ray, &paint, map);
	y = ray->frst_wall;
	shade = 1 / (1 + 0.005 * ray->dst_wall + 0.006 * \
			pow(ray->dst_wall, 2));
	while (y <= ray->fin_wall)
	{
		paint.y_te = (int)paint.pos_te & (paint.h_te - 1);
		if (ray->bro_wall == 0)
			color = pix_colour(&ray->so_tex, paint.x_te, paint.y_te);
		else if (ray->bro_wall == 1)
			color = pix_colour(&ray->no_tex, paint.x_te, paint.y_te);
		else if (ray->bro_wall == 2)
			color = pix_colour(&ray->ea_tex, paint.x_te, paint.y_te);
		else if (ray->bro_wall == 3)
			color = pix_colour(&ray->we_tex, paint.x_te, paint.y_te);
		paint.pos_te += paint.move;
		pixel_put(img, x, y, color);
		y++;
	}
}

void		cf_draw(t_goray *ray, t_base *img)
{
	t_cou		coords;
	int			draw_end;

	coords.r = 0;
	draw_end = ray->ma->y / 2;
	while (coords.r < draw_end)
	{
		coords.q = 0;
		while (coords.q < ray->ma->x)
		{
			pixel_put(img, coords.q, coords.r, ray->ma->rgb_c);
			coords.q++;
		}
		coords.r++;
	}
	while (coords.r < ray->ma->y)
	{
		coords.q = 0;
		while (coords.q < ray->ma->x)
		{
			pixel_put(img, coords.q, coords.r, ray->ma->rgb_f);
			coords.q++;
		}
		coords.r++;
	}
}
