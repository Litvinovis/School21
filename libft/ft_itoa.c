/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 14:50:55 by resther           #+#    #+#             */
/*   Updated: 2020/05/24 10:58:47 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			digit(int a)
{
	int				e;

	e = 1;
	if (a == 0)
		return (0);
	if (a == -2147483648)
	{
		e = 10;
		return (e);
	}
	if (a < 0)
	{
		a = -a;
	}
	while (a > 9)
	{
		e++;
		a = a / 10;
	}
	return (e);
}

static char			*count(char *s, int n, int q)
{
	unsigned int	r;

	r = 0;
	if (n == 0)
		*s = n + 48;
	else if (n < 0)
	{
		*s = '-';
		r = -n;
	}
	else
		r = n;
	s[q] = '\0';
	q--;
	while (r != 0)
	{
		s[q] = r % 10 + 48;
		r = r / 10;
		q--;
	}
	return (s);
}

char				*ft_itoa(int n)
{
	int				dl;
	char			*dst;

	if (n > 0)
		dl = digit(n);
	else
		dl = digit(n) + 1;
	dst = (char *)malloc(sizeof(char) * (dl + 1));
	if (dst == 0)
		return (0);
	dst = count(dst, n, dl);
	return (dst);
}
