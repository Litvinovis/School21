/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 14:31:12 by resther           #+#    #+#             */
/*   Updated: 2020/05/19 22:31:28 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t q, size_t size)
{
	void	*s;
	size_t	a;

	a = 0;
	if (!(s = malloc(q * size)))
		return (NULL);
	if (s == 0)
		return (0);
	while (q * size > a)
	{
		((char*)s)[a] = 0;
		a++;
	}
	return (s);
}
