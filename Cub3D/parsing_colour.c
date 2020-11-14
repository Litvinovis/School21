/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_colour.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 13:00:45 by resther           #+#    #+#             */
/*   Updated: 2020/09/28 19:38:29 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

static int	colour_f(char *line, int i, int *rgb)
{
	int				check;
	int				amount;
	int				point;

	check = 0;
	amount = check;
	point = 0;
	f_skip_spaces(line, &i);
	while (line[i] && !check)
	{
		if (ft_isdigit(line[i]) && amount < 3)
		{
			rgb[amount] = atoicub(line, &i);
			amount++;
			f_skip_spaces(line, &i);
			if (line[i])
				(line[i++] == ',' && point < 2) ? point++ : check++;
			f_skip_spaces(line, &i);
		}
		else
			check++;
	}
	if (check || !(amount == 3 && point == 2))
		return (0);
	return (1);
}

int			check_f(char *line, t_ma *map)
{
	int				check;
	int				rgb[3];
	int				i;

	i = 0;
	check = 0;
	map->cou++;
	i++;
	if (!(check = colour_f(line, i, rgb)))
		return (0);
	if (rgb[0] > 255 || rgb[1] > 255 || rgb[2] > 255)
		return (0);
	map->rgb_f = rgb[0] << 16 | rgb[1] << 8 | rgb[2];
	return (1);
}

int			check_c(char *line, t_ma *map)
{
	int				check;
	int				rgb[3];
	int				i;

	i = 0;
	check = 0;
	map->cou++;
	i++;
	if (!(check = colour_f(line, i, rgb)))
		return (0);
	if (rgb[0] > 255 || rgb[1] > 255 || rgb[2] > 255)
		return (0);
	map->rgb_c = rgb[0] << 16 | rgb[1] << 8 | rgb[2];
	return (1);
}
