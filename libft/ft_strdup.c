/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 18:37:42 by resther           #+#    #+#             */
/*   Updated: 2020/05/21 14:10:55 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strdup(const char *str)
{
	size_t	r;
	char	*dup;

	if (!(dup = (char*)malloc(sizeof(*str) * (ft_strlen(str) + 1))))
		return (NULL);
	r = 0;
	while (str[r])
	{
		dup[r] = str[r];
		r++;
	}
	dup[r] = '\0';
	return (dup);
}
