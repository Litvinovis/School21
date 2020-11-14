/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raycasting_add.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 13:00:41 by resther           #+#    #+#             */
/*   Updated: 2020/09/28 19:38:29 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int			pix_colour(t_base *img, int x, int y)
{
	if (!img->broad || !img->hei)
		return (0);
	x = abs(x);
	y = abs(y);
	if (x > img->broad || y > img->hei || x < 0 || y < 0)
		return (0);
	return (*(int*)(img->addr + ((x + (y * img->broad))\
		* (img->bpp / 8))));
}

int			pix_skip(t_ma *map, int y, int x)
{
	if (map->map[y][x] == ' ' || map->map[y][x] == '0' || map->map[y][x] == '2'
	|| map->map[y][x] == 'N' || map->map[y][x] == 'S' || map->map[y][x] == 'W'
		|| map->map[y][x] == 'E')
		return (1);
	return (0);
}

t_sprite	*sprite_next(int y, int x)
{
	t_sprite *sprite;

	if (!(sprite = malloc(sizeof(t_sprite) * 1)))
		return (NULL);
	sprite->y = (double)y + 0.5;
	sprite->x = (double)x + 0.5;
	sprite->dista = 0.0;
	sprite->num = 0;
	sprite->sp_prev = NULL;
	sprite->sp_next = NULL;
	return (sprite);
}

void		sprite_add(t_sprite *sprite, int y, int x, int id)
{
	t_sprite *tmp;
	t_sprite *new;

	if (!(new = malloc(sizeof(t_sprite) * 1)))
		return ;
	new->y = (double)y + 0.5;
	new->x = (double)x + 0.5;
	new->num = id;
	new->dista = 0.0;
	tmp = sprite;
	while (tmp->sp_next)
		tmp = tmp->sp_next;
	tmp->sp_next = new;
	new->sp_prev = tmp;
	new->sp_next = NULL;
}
