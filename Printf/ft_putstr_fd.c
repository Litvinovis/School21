/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/26 22:22:49 by resther           #+#    #+#             */
/*   Updated: 2020/07/30 19:03:13 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_putstr_fd(char *line, int size)
{
	int r;

	r = 0;
	while (line[r] != '\0' && r < size)
	{
		ft_putchar_fd(line[r]);
		r++;
	}
	return (r);
}
