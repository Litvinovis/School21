/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_reader.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/26 21:28:29 by resther           #+#    #+#             */
/*   Updated: 2020/07/30 18:54:23 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_string_reader(char *line, va_list list)
{
	t_arg		arg;
	int			result;
	int			i;

	result = 0;
	i = 0;
	while (line[i])
	{
		arg = ft_fill_arg();
		if (line[i] == '%')
		{
			if (line[++i] == ' ')
				ft_putchar_fd(line[i]);
			i = ft_find_letter(line, i, &arg, list);
			if (ft_which_letter(line[i]))
				result += ft_which_function(arg.mod, arg, list);
			else if (line[i])
				result += ft_putchar_fd(line[i]);
		}
		else if (line[i] != '%')
			result += ft_putchar_fd(line[i]);
		i++;
	}
	return (result);
}
