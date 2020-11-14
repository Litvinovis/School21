/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_which_function.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/26 21:29:16 by resther           #+#    #+#             */
/*   Updated: 2020/07/26 22:24:22 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_which_function(int d, t_arg arg, va_list list)
{
	int		result;

	result = 0;
	if (d == 'x')
		result += ft_print_x(va_arg(list, unsigned int), 1, arg);
	else if (d == '%')
		result += ft_print_procent(arg);
	else if (d == 'c')
		result += ft_print_c(va_arg(list, int), arg);
	else if (d == 'd' || d == 'i')
		result += ft_print_d(va_arg(list, int), arg);
	else if (d == 'X')
		result += ft_print_x(va_arg(list, unsigned int), 0, arg);
	else if (d == 's')
		result += ft_print_s(va_arg(list, char *), arg);
	else if (d == 'u')
		result += ft_print_u(va_arg(list, unsigned int), arg);
	else if (d == 'p')
		result += ft_print_p(va_arg(list, unsigned long long), arg);
	return (result);
}
