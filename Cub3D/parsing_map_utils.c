/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_map_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 12:59:56 by resther           #+#    #+#             */
/*   Updated: 2020/09/28 19:38:29 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

static int	plus_line(char *line, t_ma *map)
{
	char	*tmp_map_line;
	char	*tmp_line;

	if (!line)
		return (0);
	tmp_line = NULL;
	tmp_map_line = NULL;
	tmp_map_line = map->line_map;
	if (line)
	{
		if (!(tmp_line = ft_strjoin(line, "\n")))
			return (0);
	}
	if (!(map->line_map = ft_strjoin(map->line_map, tmp_line)))
		return (0);
	free(tmp_map_line);
	free(tmp_line);
	return (1);
}

int			start_final(char *line, t_ma *map)
{
	int i;

	i = 0;
	if (map)
	{
		while (line[i])
		{
			if (line[i] != '1' && line[i] != ' ')
				return (0);
			i++;
		}
		if (!(plus_line(line, map)))
			return (0);
	}
	else
	{
		while (line[i] && line[i] != '\n')
		{
			if (line[i] != '1' && line[i] != ' ')
				return (0);
			i++;
		}
	}
	return (1);
}

static int	line_new_add(char *line, int i, t_ma *map)
{
	if (line[i] == ' ')
		if ((line[i - 1] != ' ' && line[i - 1] != '1') || \
				(line[i + 1] != ' ' && line[i + 1] != '1'))
			return (0);
	if ((line[i] == 'N' || line[i] == 'E' || line[i] == 'S' || line[i] == 'W') \
		&& map->pos_player == '0')
	{
		map->pos_player = line[i];
		map->player_x = i;
		map->player_y = map->y_c - 1;
		return (1);
	}
	else if ((line[i] == 'N' || line[i] == 'E' || line[i] == 'S' \
	|| line[i] == 'W') && map->pos_player != '0')
		return (0);
	if (line[i + 1] == '\0' && line[i] != '1')
		return (0);
	return (1);
}

static int	check_line(char *line, t_ma *map)
{
	int i;
	int flag;

	flag = 0;
	i = 0;
	map->y_c++;
	while (line[i])
	{
		if ((line[i] != ' ' && line[i] != '1' && line[i] != 'N' && \
		line[i] != 'W' && line[i] != 'E' && line[i] != 'S' && line[i] != '2'\
		&& line[i] != '0') || ((line[i] == '0' || line[i] == '2' \
		|| line[i] == 'N' || line[i] == 'E' || line[i] == 'S' \
		|| line[i] == 'W') && !flag))
			return (0);
		flag = (line[i] == '1') ? flag + 1 : flag;
		if (line[i] == ' ' && !flag)
		{
			i++;
			continue ;
		}
		if (!(line_new_add(line, i, map)))
			return (0);
		i++;
	}
	return (1);
}

int			map_parsing_line(char *line, t_ma *map)
{
	if (map->y_c == 0)
	{
		map->y_c++;
		if (!start_final(line, map))
			return (0);
		return (1);
	}
	if (!(check_line(line, map)))
		return (0);
	plus_line(line, map);
	return (1);
}
