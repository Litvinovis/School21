/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/26 22:04:58 by resther           #+#    #+#             */
/*   Updated: 2020/07/29 13:18:23 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int			ft_print_c(char c, t_arg arg)
{
	int		result;
	int		check;

	check = 1;
	if (arg.ad == check)
	{
		ft_putchar_fd(c);
	}
	result = (ft_put_space(arg.broad, 1, 1) + 1);
	if (arg.ad != check)
	{
		ft_putchar_fd(c);
	}
	return (result);
}
