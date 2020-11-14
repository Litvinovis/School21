/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_change.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 14:28:09 by resther           #+#    #+#             */
/*   Updated: 2020/07/29 12:20:20 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

t_arg		ft_broad_flag(t_arg arg, va_list list)
{
	arg.sign++;
	arg.broad = va_arg(list, int);
	if (arg.broad < 0)
	{
		arg.broad *= -1;
		arg.ad = 1;
	}
	return (arg);
}

int			ft_point_do(char *line, int r, t_arg *arg, va_list list)
{
	r++;
	arg->p = 1;
	if (line[r] == '*')
	{
		arg->point = va_arg(list, int);
		arg->sign++;
		r++;
	}
	else
	{
		arg->point = 0;
		while (ft_isdigit(line[r]))
			arg->point = arg->point * 10 + (line[r++] - '0');
	}
	return (r);
}

t_arg		ft_number_find(char t, t_arg arg)
{
	arg.broad = arg.broad * 10 + (t - '0');
	return (arg);
}
