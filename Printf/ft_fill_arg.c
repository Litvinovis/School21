/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_arg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/26 21:27:35 by resther           #+#    #+#             */
/*   Updated: 2020/07/29 12:10:54 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

t_arg	ft_fill_arg(void)
{
	t_arg	arg;

	arg.mod = 0;
	arg.ad = 0;
	arg.null = 0;
	arg.point = -1;
	arg.broad = 0;
	arg.sign = 0;
	arg.p = 0;
	arg.m = 0;
	return (arg);
}
