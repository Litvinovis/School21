/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 13:28:04 by resther           #+#    #+#             */
/*   Updated: 2020/05/18 14:38:09 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	r;
	size_t	len;

	r = 0;
	len = 0;
	if (!dst)
		return (0);
	while (src[len])
		len++;
	if (!size)
		return (len);
	while (src[r] && r < size - 1)
	{
		dst[r] = src[r];
		r++;
	}
	dst[r] = '\0';
	return (len);
}
