/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:00:30 by resther           #+#    #+#             */
/*   Updated: 2020/10/09 17:43:58 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int				isalone(char *line)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (line[i])
	{
		if (line[i] != ' ')
			count++;
		i++;
	}
	if ((line[0] == 'R' || line[0] == 'S' || line[0] == 'C'
		|| line[0] == 'F') && count < 2)
		return (0);
	else if (count < 3)
		return (0);
	return (1);
}

static int		angle_find(t_ma *map)
{
	if (map->pos_player == 'N')
		map->player_a = 3 * M_PI / 2;
	else if (map->pos_player == 'S')
		map->player_a = M_PI / 2;
	else if (map->pos_player == 'E')
		map->player_a = 0;
	else if (map->pos_player == 'W')
		map->player_a = M_PI;
	else
	{
		ft_putstr_fd("no player on map", 0);
		return (0);
	}
	return (1);
}

static void		broad_max(t_ma *map)
{
	int	y;
	int	len;
	int	prev_len;

	y = 0;
	len = 0;
	while (map->map[y])
	{
		prev_len = len;
		len = ft_strlen(map->map[y]);
		if (prev_len < len)
			prev_len = len;
		y++;
	}
	map->x_c = prev_len;
}

int				main_parser(t_ma *map, char *argv)
{
	int		fd;
	char	*line;

	line = NULL;
	if ((fd = open(argv, O_RDONLY)) < 0)
	{
		ft_putstr_fd("ERROR\nFILE IS NOT EXIST\n", 0);
		return (0);
	}
	if (!newmaplist(map))
		return (error_mes(0, 0, 2));
	if (!(parsing_par(line, map, fd)) || !(go_parser_map(line, map, fd)))
		return (0);
	if (!angle_find(map))
		return (0);
	broad_max(map);
	return (1);
}

void			line_free(char **words)
{
	int i;

	i = 0;
	if (words)
	{
		while (words[i])
		{
			free(words[i]);
			i++;
		}
		free(words);
		words = NULL;
	}
}
