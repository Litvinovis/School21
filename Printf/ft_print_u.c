/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 13:09:13 by resther           #+#    #+#             */
/*   Updated: 2020/07/30 18:53:22 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_fill_u(char *nbr_str, t_arg arg)
{
	int result;

	result = 0;
	if (arg.point > 0)
	{
		result += ft_put_space(arg.point - 1, ft_strlen(nbr_str) - 1, 0);
	}
	result += ft_putstr_fd(nbr_str, ft_strlen(nbr_str));
	return (result);
}

int		ft_put_u(char *nbr_str, t_arg arg)
{
	int		result;

	result = 0;
	if (arg.ad == 1)
		result += ft_fill_u(nbr_str, arg);
	if (arg.point > 0 && arg.point < (int)ft_strlen(nbr_str))
		arg.point = ft_strlen(nbr_str);
	if (arg.point > 0)
	{
		arg.broad -= arg.point;
		result += ft_put_space(arg.broad, 0, 1);
	}
	else
	{
		if (arg.null == 0 || (arg.sign == 2 && !arg.point))
			result += ft_put_space(arg.broad, ft_strlen(nbr_str), 1);
		else
			result += ft_put_space(arg.broad, ft_strlen(nbr_str), 0);
	}
	if (arg.ad == 0)
		result += ft_fill_u(nbr_str, arg);
	return (result);
}

int		ft_print_u(unsigned int nbr, t_arg arg)
{
	int		result;
	char	*nbr_str;

	result = 0;
	nbr = (unsigned int)(4294967296 + nbr);
	if (arg.point == 0 && arg.p == 1 && nbr == 0)
	{
		if (arg.broad > 0)
			result += ft_put_space(arg.broad, 0, 1);
		return (result);
	}
	nbr_str = ft_itoa_base(nbr, 10);
	result += ft_put_u(nbr_str, arg);
	free(nbr_str);
	return (result);
}
