/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 14:26:54 by resther           #+#    #+#             */
/*   Updated: 2020/05/17 20:18:25 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *s;
	unsigned char q;

	s = (unsigned char *)b;
	q = (unsigned char)c;
	while (len--)
		*s++ = q;
	return (b);
}
