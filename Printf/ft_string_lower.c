/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_lower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/26 21:32:14 by resther           #+#    #+#             */
/*   Updated: 2020/07/26 22:24:10 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char		*ft_string_lower(char *line)
{
	int r;

	r = 0;
	while (line[r] != '\0')
	{
		line[r] = ft_tolower(line[r]);
		r++;
	}
	return (line);
}
