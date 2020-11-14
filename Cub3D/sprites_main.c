/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:00:57 by resther           #+#    #+#             */
/*   Updated: 2020/09/28 19:38:29 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

static void	sort_list(t_sprite *tmp, t_sprite *a)
{
	int		t;
	double	j;

	t = 0;
	t = tmp->num;
	tmp->num = a->num;
	a->num = t;
	j = tmp->x;
	tmp->x = a->x;
	a->x = j;
	j = tmp->y;
	tmp->y = a->y;
	a->y = j;
	j = tmp->dista;
	tmp->dista = a->dista;
	a->dista = j;
}

static void	sort_sprite(t_goray *ray)
{
	t_sprite	*tmp;
	t_sprite	*a;
	int			flag;

	flag = 1;
	while (flag)
	{
		tmp = ray->sprite;
		a = tmp->sp_next;
		flag = 0;
		while (a)
		{
			if ((tmp->dista) < (a->dista))
			{
				sort_list(tmp, a);
				flag = 1;
			}
			tmp = tmp->sp_next;
			a = a->sp_next;
		}
	}
}

void		count_sprite(t_goray *ray, t_ma *ma, t_sprite *sprite)
{
	t_cou	count;

	count.check = 0;
	count.r = 0;
	while (ma->map[count.r])
	{
		count.q = 0;
		while (ma->map[count.r][count.q])
		{
			if (ma->map[count.r][count.q] == '2' && count.check == 0)
			{
				sprite = sprite_next(count.r, count.q);
				count.check++;
			}
			else if (ma->map[count.r][count.q] == '2' && count.check)
			{
				sprite_add(sprite, count.r, count.q, count.check);
				count.check++;
			}
			count.q++;
		}
		count.r++;
	}
	ray->sprite = sprite;
}

static void	dist_sprite(t_goray *ray)
{
	t_sprite	*sp;

	sp = ray->sprite;
	while (sp)
	{
		sp->dista = sqrt(pow(ray->x_hero - sp->x, 2) + \
						pow(ray->y_hero - sp->y, 2));
		sp = sp->sp_next;
	}
}

void		manage_sprite(t_goray *ray)
{
	t_sprite *tmp;

	if (ray->sprite)
	{
		dist_sprite(ray);
		sort_sprite(ray);
		tmp = ray->sprite;
		while (tmp)
		{
			paint_sprite(ray, tmp);
			tmp = tmp->sp_next;
		}
	}
}
