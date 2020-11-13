/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 14:28:10 by resther           #+#    #+#             */
/*   Updated: 2020/05/18 13:47:53 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			r;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	r = 0;
	while ((a[r] || b[r]) && r < n)
	{
		if (a[r] != b[r])
			return (a[r] - b[r]);
		r++;
	}
	return (0);
}
