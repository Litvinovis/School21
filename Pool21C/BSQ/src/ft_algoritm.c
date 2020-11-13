/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algoritm.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 16:05:44 by resther           #+#    #+#             */
/*   Updated: 2020/02/26 23:11:40 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	ft_min(char **q, int y, int x)
{
	if (q[y][x - 1] <= q[y - 1][x - 1] && q[y][x - 1] <= q[y - 1][x])
		return (q[y][x - 1] + 1);
	if (q[y - 1][x] <= q[y - 1][x - 1] && q[y - 1][x] <= q[y][x - 1])
		return (q[y - 1][x] + 1);
	if (q[y - 1][x - 1] <= q[y - 1][x] && q[y - 1][x - 1] <= q[y][x - 1])
		return (q[y - 1][x - 1] + 1);
	return (0);
}

char	**ft_algoritm(char **q, char a)
{
	int x;
	int y;

	y = 0;
	while (q[y] != '\0')
	{
		x = 0;
		while (q[y][x] != '\0')
		{
			if (q[y][x] == a)
			{
				if (y != 0 && x != 0 && q[y][x - 1] != '0' &&
				q[y - 1][x - 1] != '0' && q[y - 1][x] != '0')
					q[y][x] = (ft_min(q, y, x));
				else
					q[y][x] = '1';
			}
			else
				q[y][x] = '0';
			x++;
		}
		y++;
	}
	return (q);
}
