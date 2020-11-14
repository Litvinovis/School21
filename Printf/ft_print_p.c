/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 13:08:22 by resther           #+#    #+#             */
/*   Updated: 2020/07/29 00:27:35 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_fill_p(char *line, int point)
{
	int result;

	result = 2;
	ft_putchar_fd('0');
	ft_putchar_fd('x');
	if (point > 0)
	{
		result += ft_put_space(point, ft_strlen(line), 0);
		result += ft_putstr_fd(line, point);
	}
	else
	{
		result += ft_putstr_fd(line, ft_strlen(line));
	}
	return (result);
}

int			ft_print_p(unsigned long long nbr, t_arg arg)
{
	char	*line;
	int		result;

	result = 0;
	line = ft_itoa_base(nbr, 16);
	line = ft_string_lower(line);
	if (arg.point < (int)ft_strlen(line))
		arg.point = ft_strlen(line);
	if (arg.ad == 1)
		result += ft_fill_p(line, arg.point);
	result += ft_put_space(arg.broad, ft_strlen(line) + 2, 1);
	if (arg.ad == 0)
		result += ft_fill_p(line, arg.point);
	free(line);
	return (result);
}
