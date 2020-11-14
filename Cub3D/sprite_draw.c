/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprite_draw.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:00:51 by resther           #+#    #+#             */
/*   Updated: 2020/10/01 12:30:46 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

static void	sprite_drawy(t_sprait *sprait, t_goray *ray, int stripe)
{
	int		y;
	int		d;
	int		color;

	y = sprait->y_start;
	while (y < sprait->y_end)
	{
		d = (y) * 256\
		- ray->ma->y * 128 + sprait->h_spr * 128;
		sprait->y_te = ((d * ray->spr_te.hei) / sprait->h_spr) / 256;
		color = pix_colour(&ray->spr_te, sprait->x_te, sprait->y_te);
		if ((color & 0x00FFFFFF) != 0)
			pixel_put(ray->pic, stripe, y, color);
		y++;
	}
}

static void	sprite_draw(t_sprait *sprait, t_goray *ray)
{
	int	stripe;

	stripe = sprait->x_start;
	while (stripe < sprait->x_end)
	{
		sprait->x_te = (int)(256 * (stripe - (-sprait->b_sp / 2 + \
		sprait->x_spr_src)) * ray->spr_te.broad / sprait->b_sp) / 256;
		if (sprait->y_change > 0 && stripe >= 0 && stripe < ray->ma->x &&\
			sprait->y_change < ray->buff_x[stripe])
			sprite_drawy(sprait, ray, stripe);
		stripe++;
	}
}

static void	find_y(t_goray *ray, t_sprait *sprait)
{
	sprait->y_start = -sprait->h_spr / 2 + ray->ma->y / 2;
	if (sprait->y_start < 0)
	{
		sprait->y_start = 0;
	}
	sprait->y_end = sprait->h_spr / 2 + ray->ma->y / 2;
	if (sprait->y_end >= ray->ma->y)
	{
		sprait->y_end = ray->ma->y;
	}
}

void		find_size_sprite(t_goray *ray, t_sprait *sprait)
{
	sprait->h_spr = abs((int)(((ray->ma->y / (sprait->y_change))) * 1.1));
	sprait->b_sp = abs((int)(((ray->ma->y / (sprait->y_change))) * 1.1));
}

void		paint_sprite(t_goray *ray, t_sprite *sprite_data)
{
	t_sprait sprait;

	sprait.x_spr = sprite_data->x - ray->x_hero;
	sprait.y_spr = sprite_data->y - ray->y_hero;
	sprait.det_inv = 1.0 / \
		(ray->x_fly * ray->y_dr - ray->x_dr * ray->y_fly);
	sprait.x_change = sprait.det_inv * \
		(ray->y_dr * sprait.x_spr - ray->x_dr * sprait.y_spr);
	sprait.y_change = sprait.det_inv * \
		(-ray->y_fly * sprait.x_spr + ray->x_fly * sprait.y_spr);
	sprait.x_spr_src = (int)((ray->ma->x / 2) * \
		(1 + sprait.x_change / sprait.y_change));
	sprait.src_v_mv = (int)(STEPV / sprait.y_change);
	find_size_sprite(ray, &sprait);
	find_y(ray, &sprait);
	sprait.x_start = -sprait.b_sp / 2 + sprait.x_spr_src;
	if (sprait.x_start < 0)
		sprait.x_start = 0;
	sprait.x_end = sprait.b_sp / 2 + sprait.x_spr_src;
	if (sprait.x_end >= ray->ma->x)
		sprait.x_end = ray->ma->x;
	sprite_draw(&sprait, ray);
}
