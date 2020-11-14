/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 13:01:21 by resther           #+#    #+#             */
/*   Updated: 2020/09/28 19:42:49 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int			newmaplist(t_ma *map)
{
	map->rgb_c = -1;
	map->rgb_f = -1;
	map->y_c = 0;
	map->x_c = 0;
	map->no = NULL;
	map->so = NULL;
	map->we = NULL;
	map->ea = NULL;
	map->cou = 0;
	map->str = NULL;
	map->s = NULL;
	map->pos_player = '0';
	if (!(map->line_map = ft_strdup("")))
		return (0);
	map->map = NULL;
	map->player_a = 0;
	map->player_x = 0;
	map->player_y = 0;
	return (1);
}

int			is_digit(char *str)
{
	int	r;

	r = 0;
	while (str[r])
	{
		if (str[r] < '0' || str[r] > '9')
			return (0);
		r++;
	}
	return (1);
}

static int	check_space(int c)
{
	if (c == '\n' || c == '\t' || c == '\v' || \
			c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

void		f_skip_spaces(char *line, int *i)
{
	while (check_space(line[*i]))
		(*i)++;
}

int			atoicub(char *line, int *i)
{
	long long int	result;
	int				sign;

	sign = 1;
	result = 0;
	f_skip_spaces(line, i);
	if (line[*i] == '-')
		sign = -1;
	if (line[*i] == '-' || line[*i] == '+')
		(*i)++;
	while (line[*i] >= '0' && line[*i] <= '9')
	{
		if ((result * 10) < result)
			return (sign < 0 ? 0 : -1);
		result = result * 10 + line[*i] - '0';
		(*i)++;
	}
	return ((int)result * (int)sign);
}
