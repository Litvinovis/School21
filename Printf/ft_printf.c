/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 12:09:58 by resther           #+#    #+#             */
/*   Updated: 2020/07/30 18:54:41 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_printf(const char *line, ...)
{
	int			result;
	va_list		list;
	char		*string;

	if (!line)
		return (-1);
	result = 0;
	string = ft_strdup(line);
	va_start(list, line);
	result += ft_string_reader(string, list);
	va_end(list);
	free(string);
	return (result);
}
