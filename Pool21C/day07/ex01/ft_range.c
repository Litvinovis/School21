/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 22:18:29 by resther           #+#    #+#             */
/*   Updated: 2020/02/13 15:24:13 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int e;
	int *t;
	int r;

	if (max < min)
		return (0);
	r = max - min;
	e = 0;
	t = malloc(sizeof(int) * (max - min));
	while (r > 0)
	{
		t[e] = min;
		e++;
		min++;
		r--;
	}
	return (t);
}
