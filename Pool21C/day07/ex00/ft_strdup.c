/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 19:59:19 by resther           #+#    #+#             */
/*   Updated: 2020/02/13 15:02:02 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		a;
	int		f;
	char	*d;

	a = 0;
	f = 0;
	while (src[a] != '\0')
	{
		a++;
	}
	if (a == 0)
	{
		return (NULL);
	}
	d = (char*)malloc(sizeof(a + 1));
	while (src[f] != '\0')
	{
		d[f] = src[f];
		f++;
	}
	d[f] = '\0';
	return (d);
}
