/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 13:35:31 by resther           #+#    #+#             */
/*   Updated: 2020/05/21 19:52:09 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		r;
	size_t		len;
	size_t		dst_len;

	dst_len = ft_strlen(dst);
	len = dst_len + ft_strlen(src);
	if (size <= dst_len)
		return (ft_strlen(src) + size);
	while (*dst)
		dst++;
	r = 0;
	while ((r < size - dst_len - 1) && src[r])
	{
		dst[r] = src[r];
		r++;
	}
	dst[r] = '\0';
	return (len);
}
