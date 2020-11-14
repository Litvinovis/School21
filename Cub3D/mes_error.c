/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mes_error.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 12:32:30 by resther           #+#    #+#             */
/*   Updated: 2020/10/01 12:54:20 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void			fputstr(char *s, int fd)
{
	int	r;

	r = 0;
	while (s[r])
		r++;
	if (!s)
		return ;
	write(fd, s, r);
}

void			free_char(char *line)
{
	if (line)
	{
		free(line);
		line = NULL;
	}
}

void			clear_r(t_goray *ray)
{
	t_sprite	*tmp;
	t_sprite	*var;

	if (ray->buff_x)
		free(ray->buff_x);
	if (ray->sprite)
	{
		tmp = ray->sprite;
		while (tmp)
		{
			var = tmp->sp_next;
			free(tmp);
			tmp = var;
		}
		ray->sprite = NULL;
	}
}

void			clear_m(t_ma *ma)
{
	int	i;

	i = 0;
	if (ma->no)
		free(ma->no);
	if (ma->so)
		free(ma->so);
	if (ma->we)
		free(ma->we);
	if (ma->ea)
		free(ma->ea);
	if (ma->s)
		free(ma->s);
	if (ma->line_map)
		free(ma->line_map);
	if (ma->map)
	{
		while (ma->map[i])
		{
			free(ma->map[i]);
			i++;
		}
		free(ma->map);
		ma->map = NULL;
	}
}

int				error_mes(t_ma *ma, char *line, int code)
{
	if (code == 1)
		fputstr("ERROR\nFILE IS NOT EXIST\n", 0);
	else if (code == 2)
		fputstr("ERROR\nMEMORY FAILURE\n", 0);
	else if (code == 3)
		fputstr("ERROR\nINCORRECT PARAMETERS\n", 0);
	else if (code == 4)
		fputstr("ERROR\nMAP IS BAD\n", 0);
	else if (code == 5)
		fputstr("ERROR\nMAP IS BAD\n", 0);
	else if (code == 6)
	{
		fputstr("ERROR\nMAP ERROR\n", 0);
		return (0);
	}
	free_char(line);
	clear_m(ma);
	return (0);
}
