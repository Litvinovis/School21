/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 11:07:45 by resther           #+#    #+#             */
/*   Updated: 2020/02/13 18:53:04 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int *range, int min, int max)
{
	int r;
	int e;

	e = 0;
	if (max < min)
		return (0);
	r = max - min;
	range = (int*)malloc(sizeof(int) * r);
	while (min < max)
	{
		range[e] = min;
		min++;
		e++;
	}
	return (r);
}
