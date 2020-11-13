/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 20:50:16 by resther           #+#    #+#             */
/*   Updated: 2020/02/23 16:01:08 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

char	*ft_split_whitespaces(char *str)
{
	int		r;
	int		x;
	char	*strnew;

	r = 0;
	x = 0;
	strnew = (char*)malloc(sizeof(char) * (ft_strlen(str) + 1));
	while (str[r] != '\0')
	{
		if (str[r] != ' ')
		{
			strnew[x] = str[r];
			x++;
		}
		r++;
	}
	strnew[x] = '\0';
	return (strnew);
}
