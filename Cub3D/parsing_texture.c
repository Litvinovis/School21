/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_texture.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 13:01:16 by resther           #+#    #+#             */
/*   Updated: 2020/09/28 19:38:29 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	check_ea(char *line, t_ma *map)
{
	char **words;

	words = NULL;
	map->cou++;
	if (!(words = ft_split(line, ' ')) || !(count_words(words)) \
	|| (words[1][0] != '.' && words[1][0] != '/') \
	|| !(map->ea = ft_strdup(words[1])))
	{
		line_free(words);
		return (0);
	}
	line_free(words);
	return (1);
}

int	check_we(char *line, t_ma *map)
{
	char **words;

	words = NULL;
	map->cou++;
	if (!(words = ft_split(line, ' ')) || !(count_words(words))\
	|| (words[1][0] != '.' && words[1][0] != '/')\
	|| !(map->we = ft_strdup(words[1])))
	{
		line_free(words);
		return (0);
	}
	line_free(words);
	return (1);
}

int	check_so(char *line, t_ma *map)
{
	char **words;

	words = NULL;
	map->cou++;
	if (!(words = ft_split(line, ' ')) || !(count_words(words))\
	|| (words[1][0] != '.' && words[1][0] != '/')\
	|| !(map->so = ft_strdup(words[1])))
	{
		line_free(words);
		return (0);
	}
	line_free(words);
	return (1);
}

int	check_no(char *line, t_ma *map)
{
	char **words;

	words = NULL;
	map->cou++;
	if (!(words = ft_split(line, ' ')) || !(count_words(words))\
	|| (words[1][0] != '.' && words[1][0] != '/')\
	|| !(map->no = ft_strdup(words[1])))
	{
		line_free(words);
		return (0);
	}
	line_free(words);
	return (1);
}

int	check_s(char *line, t_ma *map)
{
	char **words;

	words = NULL;
	map->cou++;
	if (!(words = ft_split(line, ' ')) || !(count_words(words))\
	|| (words[1][0] != '.' && words[1][0] != '/')\
	|| !(map->s = ft_strdup(words[1])))
	{
		line_free(words);
		return (0);
	}
	line_free(words);
	return (1);
}
