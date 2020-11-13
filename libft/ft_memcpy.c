/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 11:01:11 by resther           #+#    #+#             */
/*   Updated: 2020/05/21 11:35:30 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *a;
	unsigned char *b;

	if (dst == NULL && src == NULL)
		return (NULL);
	b = (unsigned char *)dst;
	a = (unsigned char *)src;
	while (n != 0)
	{
		*b = *a;
		n--;
		b++;
		a++;
	}
	return (dst);
}
