/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 11:35:36 by resther           #+#    #+#             */
/*   Updated: 2020/05/17 18:55:58 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			r;
	unsigned char	*new_dst;
	unsigned char	*new_src;

	new_dst = (unsigned char*)dst;
	new_src = (unsigned char*)src;
	r = 0;
	while (r < n)
	{
		new_dst[r] = new_src[r];
		if (new_dst[r] == (unsigned char)c)
			return ((void*)(dst + r + 1));
		r++;
	}
	return (NULL);
}
