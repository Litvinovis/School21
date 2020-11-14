/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:00:04 by resther           #+#    #+#             */
/*   Updated: 2020/09/30 17:08:57 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

static int	col_check(t_ma *map, int i)
{
	int r;

	r = 0;
	while (map->map[i][r] && map->map[i][r] != '\n')
	{
		if (map->map[i][r] == ' ' && (map->map[i - 1][r] == '0' ||\
		map->map[i - 1][r] == '2' || map->map[i - 1][r] == 'N' || \
		map->map[i - 1][r] == 'S' || map->map[i - 1][r] == 'W'
		|| map->map[i - 1][r] == 'E'))
			return (0);
		if ((map->map[i][r] == '0' && (map->map[i - 1][r] == ' ')) ||\
		(map->map[i][r] == '0' && (r > (int)(ft_strlen(map->map[i + 1]) - 1)))
		|| (map->map[i][r] == '0' && (r > (int)(ft_strlen(map->map[i - 1])\
		- 1))))
			return (0);
		if (((map->map[i][r] == 'W' || map->map[i][r] == 'S' \
		|| map->map[i][r] == 'N' || map->map[i][r] == 'E' ||\
		map->map[i][r] == '2') && (r > (int)(ft_strlen(map->map[i + 1]) - 1)\
		|| r > (int)(ft_strlen(map->map[i - 1]) - 1))))
			return (0);
		r++;
	}
	return (1);
}

int			parsing_map(t_ma *map)
{
	int i;

	i = 1;
	if (!(map->map = ft_split(map->line_map, '\n')))
		return (0);
	free(map->line_map);
	map->line_map = NULL;
	if (!(start_final(map->map[map->y_c - 1], (void*)0)))
		return (0);
	while (map->map[i])
	{
		if (!(col_check(map, i)))
			return (0);
		i++;
	}
	return (1);
}

static int	last_check(char *line, t_ma *map)
{
	if (line && line[0] == '\0')
	{
		free_char(line);
		if (!(parsing_map(map)))
			return (error_mes(map, 0, 5));
		return (1);
	}
	else
	{
		if ((line && line[0] != ' ' && line[0] != '1') && map->y_c != 0)
			return (error_mes(map, line, 4));
		if (!(map_parsing_line(line, map)))
			return (error_mes(map, line, 4));
		free_char(line);
		if (!(parsing_map(map)))
			return (error_mes(map, 0, 5));
	}
	return (1);
}

int			go_parser_map(char *line, t_ma *map, int fd)
{
	while (get_next_line(fd, &line) > 0)
	{
		if (line[0] == '\0' && map->y_c == 0)
		{
			free_char(line);
			continue;
		}
		else if ((line && line[0] != ' ' && line[0] != '1') && map->y_c)
			return (error_mes(map, line, 4));
		if (!(map_parsing_line(line, map)))
			return (error_mes(map, line, 4));
		free_char(line);
	}
	if (!(last_check(line, map)))
		return (0);
	return (1);
}
