/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_procent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 13:09:45 by resther           #+#    #+#             */
/*   Updated: 2020/07/26 22:16:15 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int			ft_print_procent(t_arg arg)
{
	int		result;
	int		check;

	result = 0;
	check = 1;
	if (arg.null)
		check = 0;
	if (arg.ad == 1)
	{
		ft_putchar_fd('%');
	}
	result += ft_put_space(arg.broad, 1, check);
	if (arg.ad == 0)
	{
		ft_putchar_fd('%');
	}
	result++;
	return (result);
}
