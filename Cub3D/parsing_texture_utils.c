/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_texture_utils.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:01:09 by resther           #+#    #+#             */
/*   Updated: 2020/10/01 13:02:34 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int			error_texture(int x)
{
	if (x == 0)
	{
		ft_putstr_fd("ERROR\nTEXTURE ERROR\n", 0);
	}
	return (0);
}

static int	addr_get(t_goray *ray)
{
	if (!(ray->so_tex.addr = mlx_get_data_addr(ray->so_tex.img, \
	&ray->so_tex.bpp, &ray->so_tex.len_line, \
	&ray->so_tex.last)))
		return (0);
	if (!(ray->no_tex.addr = mlx_get_data_addr(ray->no_tex.img, \
	&ray->no_tex.bpp, &ray->no_tex.len_line, \
	&ray->no_tex.last)))
		return (0);
	if (!(ray->ea_tex.addr = mlx_get_data_addr(ray->ea_tex.img,\
	&ray->ea_tex.bpp,\
	&ray->ea_tex.len_line, &ray->ea_tex.last)))
		return (0);
	if (!(ray->we_tex.addr = mlx_get_data_addr(ray->we_tex.img,\
	&ray->we_tex.bpp, \
	&ray->we_tex.len_line, &ray->we_tex.last)))
		return (0);
	if (!(ray->spr_te.addr = mlx_get_data_addr(ray->spr_te.img,\
	&ray->spr_te.bpp,\
	&ray->spr_te.len_line, &ray->spr_te.last)))
		return (0);
	return (1);
}

int			tex_get(t_goray *ray)
{
	if (!(ray->so_tex.img = mlx_xpm_file_to_image(ray->vars->mlx,\
	ray->ma->so, &ray->so_tex.broad, &ray->so_tex.hei)))
		return (error_texture(0));
	if (!(ray->no_tex.img = mlx_xpm_file_to_image(ray->vars->mlx,\
	ray->ma->no, &ray->no_tex.broad, &ray->no_tex.hei)))
		return (error_texture(0));
	if (!(ray->ea_tex.img = mlx_xpm_file_to_image(ray->vars->mlx,\
	ray->ma->ea, &ray->ea_tex.broad, &ray->ea_tex.hei)))
		return (error_texture(0));
	if (!(ray->we_tex.img = mlx_xpm_file_to_image(ray->vars->mlx,\
	ray->ma->we, &ray->we_tex.broad, &ray->we_tex.hei)))
		return (error_texture(0));
	if (!(ray->spr_te.img = mlx_xpm_file_to_image(ray->vars->mlx,\
	ray->ma->s, &ray->spr_te.broad, &ray->spr_te.hei)))
		return (error_texture(0));
	if (!addr_get(ray))
		return (error_texture(0));
	return (1);
}
