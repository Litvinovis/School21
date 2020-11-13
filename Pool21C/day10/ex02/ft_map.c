/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 15:03:30 by resther           #+#    #+#             */
/*   Updated: 2020/02/17 20:45:48 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int r;
	int *array;

	r = 0;
	array = (int*)malloc(sizeof(int) * length);
	while (r < length)
	{
		f(tab[r]);
		r++;
	}
	return (array);
}
