/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 13:10:23 by resther           #+#    #+#             */
/*   Updated: 2020/07/30 18:53:45 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int			ft_fill_x(char *xline, int point)
{
	int result;

	result = 0;
	if (point > 0)
		result += ft_put_space(point - 1, ft_strlen(xline) - 1, 0);
	result += ft_putstr_fd(xline, ft_strlen(xline));
	return (result);
}

int			ft_put_x(char *xline, t_arg arg)
{
	int		result;

	result = 0;
	if (arg.ad == 1)
		result += ft_fill_x(xline, arg.point);
	if (arg.point > 0 && arg.point < (int)ft_strlen(xline))
		arg.point = ft_strlen(xline);
	if (arg.point > 0)
	{
		arg.broad -= arg.point;
		result += ft_put_space(arg.broad, 0, 1);
	}
	else
	{
		if (arg.null == 0 || (arg.sign == 2 && !arg.point))
			result += ft_put_space(arg.broad, ft_strlen(xline), 1);
		else
			result += ft_put_space(arg.broad, ft_strlen(xline), 0);
	}
	if (arg.ad == 0)
		result += ft_fill_x(xline, arg.point);
	return (result);
}

int			ft_print_x(unsigned int nbr, int lower, t_arg arg)
{
	char	*xline;
	int		result;

	result = 0;
	if (arg.point == 0 && arg.p == 1 && nbr == 0)
	{
		if (arg.broad > 0)
			result += ft_put_space(arg.broad, 0, 1);
		return (result);
	}
	nbr = (unsigned int)(4294967296 + nbr);
	xline = ft_itoa_base((unsigned long long)nbr, 16);
	if (lower == 1)
		xline = ft_string_lower(xline);
	result += ft_put_x(xline, arg);
	free(xline);
	return (result);
}
