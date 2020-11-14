/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_par.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:00:17 by resther           #+#    #+#             */
/*   Updated: 2020/10/05 15:01:13 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

static int	check_r(char *line, t_ma *map)
{
	int i;
	int x;
	int y;

	i = 0;
	map->cou++;
	if (!isalone(line))
		return (0);
	if (!(map->str = ft_split(line, ' ')))
		return (0);
	while (map->str[i])
		i++;
	if (i != 3 || !(is_digit(map->str[1]) || !(is_digit(map->str[2])))
	|| !(y = ft_atoi(map->str[2])) || y <= 0)
		return (0);
	if (!(x = ft_atoi(map->str[1])) || x <= 0)
		return (0);
	map->x = (map->x >= x) ? x : map->x;
	map->y = (map->y >= y) ? y : map->y;
	line_free(map->str);
	return (1);
}

int			tex_check(char *line, t_ma *map)
{
	if (line[0] == 'R')
		return (((check_r(line, map))));
	else if (line[0] == 'N' && line[1] == 'O' && line[2] == ' ')
		return ((check_no(line, map)));
	else if (line[0] == 'S' && line[1] == 'O' && line[2] == ' ')
		return ((check_so(line, map)));
	else if (line[0] == 'W' && line[1] == 'E' && line[2] == ' ')
		return (((check_we(line, map))));
	else if (line[0] == 'E' && line[1] == 'A' && line[2] == ' ')
		return (((check_ea(line, map))));
	else if (line[0] == 'S' && line[1] == ' ')
		return ((check_s(line, map)));
	else if (line[0] == 'F' && line[1] == ' ')
		return ((check_f(line, map)));
	else if (line[0] == 'C' && line[1] == ' ')
		return ((check_c(line, map)));
	else
		return (0);
	return (1);
}

static int	final_check(t_ma *map)
{
	if (map->x == 0 || map->y == 0 || map->cou != 8 || map->no == NULL ||
	map->so == NULL || map->we == NULL || map->ea == NULL || map->s == NULL
	|| map->rgb_f == (unsigned long)-1 || map->rgb_c == (unsigned long)-1)
		return (0);
	return (1);
}

int			parsing_par(char *line, t_ma *map, int fd)
{
	while (get_next_line(fd, &line) > 0)
	{
		if (line[0] == '\0')
		{
			free_char(line);
			continue ;
		}
		if (!(tex_check(line, map)))
			return (error_mes(map, line, 3));
		if (map->cou == 8)
			break ;
		free_char(line);
	}
	free_char(line);
	if (!(final_check(map)))
		return (error_mes(map, line, 6));
	return (1);
}
