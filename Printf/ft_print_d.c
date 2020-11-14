/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 13:28:51 by resther           #+#    #+#             */
/*   Updated: 2020/07/30 18:54:23 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_d_width(char *string_num, int int_num, t_arg arg)
{
	int result;

	result = 0;
	if (arg.m == 1 && int_num < 0)
	{
		result += ft_putchar_fd('-');
		arg.m = 0;
	}
	if (arg.point > 0 && arg.p == 1)
		result += ft_put_space(arg.point - 1, ft_strlen(string_num) - 1, 0);
	if (arg.m == 1 && arg.broad > 0)
	{
		result += ft_putchar_fd('-');
	}
	result += ft_putstr_fd(string_num, ft_strlen(string_num));
	return (result);
}

int		ft_put_d(char *string_num, int int_num, t_arg arg)
{
	int		result;

	result = 0;
	if (arg.ad == 1)
		result += ft_d_width(string_num, int_num, arg);
	if (arg.point > 0 && arg.point < (int)ft_strlen(string_num))
		arg.point = ft_strlen(string_num);
	if (arg.point > 0)
		result += ft_put_space(arg.broad -= arg.point, 0, 1);
	else
	{
		if (arg.null == 0 || arg.ad || (arg.sign == 2 && !arg.point))
			result += ft_put_space(arg.broad, ft_strlen(string_num), 1);
		else
		{
			if (arg.m)
				result += ft_putchar_fd('-');
			arg.m = 0;
			result += ft_put_space(arg.broad, ft_strlen(string_num), 0);
		}
	}
	if (arg.ad == 0)
		result += ft_d_width(string_num, int_num, arg);
	return (result);
}

int		if_null(t_arg arg)
{
	if (arg.broad > 0 && arg.p == 1 && arg.point > 0)
		arg.null = 0;
	return (0);
}

int		ft_print_d(int in_d, t_arg arg)
{
	int			int_num;
	char		*string_num;
	int			result;

	result = if_null(arg);
	int_num = in_d;
	if (in_d == -2147483648)
		return (ft_putstr_fd("-2147483648", 12));
	if (arg.point == 0 && arg.p == 1 && in_d == 0)
		return (result += ft_put_space(arg.broad, 0, 1));
	if (in_d < 0)
	{
		arg.m = 1;
		if (arg.broad == 0 && arg.point == 0)
		{
			result += ft_putchar_fd('-');
			arg.m = 0;
		}
		in_d *= -1;
		arg.broad--;
	}
	string_num = ft_itoa(in_d);
	result += ft_put_d(string_num, int_num, arg);
	free(string_num);
	return (result);
}
