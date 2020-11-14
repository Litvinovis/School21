/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/26 22:14:50 by resther           #+#    #+#             */
/*   Updated: 2020/07/30 18:53:30 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_put_space_s(char *line, int point)
{
	int		result;

	result = 0;
	if (point > 0)
	{
		result += ft_put_space(point, (int)ft_strlen(line), 1);
		result += ft_putstr_fd(line, point);
	}
	else
		result += ft_putstr_fd(line, (int)ft_strlen(line));
	return (result);
}

int			ft_print_s(char *line, t_arg arg)
{
	int		result;

	result = 0;
	if ((!line && arg.point != 0) || (!line && arg.p == 0))
		line = "(null)";
	if (!line && arg.point < 6 && arg.p == 1)
		line = "";
	if (arg.point == 0 && arg.p == 1 && arg.broad == 0)
		return (result);
	if (arg.point == 0 && arg.p == 1 && arg.broad > 0)
	{
		result += ft_put_space(arg.broad, 0, 1);
		return (result);
	}
	if (arg.point > 0 && arg.point > (int)ft_strlen(line))
		arg.point = (int)ft_strlen(line);
	if (arg.ad == 1)
		result += ft_put_space_s(line, arg.point);
	if (arg.point > 0)
		result += ft_put_space(arg.broad, arg.point, 1);
	else
		result += ft_put_space(arg.broad, (int)ft_strlen(line), 1);
	if (arg.ad == 0)
		result += ft_put_space_s(line, arg.point);
	return (result);
}
