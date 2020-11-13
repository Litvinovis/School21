/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 12:39:47 by resther           #+#    #+#             */
/*   Updated: 2020/05/21 11:38:49 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				r;
	unsigned char		*dst2;
	unsigned char		*src2;

	if (dst == NULL && src == NULL)
		return (NULL);
	dst2 = (unsigned char*)dst;
	src2 = (unsigned char*)src;
	r = 0;
	if (src2 < dst2)
		while (++r <= len)
			dst2[len - r] = src2[len - r];
	else
		while (len--)
			*(dst2++) = *(src2++);
	return (dst);
}
