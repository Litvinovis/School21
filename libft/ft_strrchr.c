/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 14:02:05 by resther           #+#    #+#             */
/*   Updated: 2020/05/18 12:41:00 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = 0;
	while (s[i])
	{
		if (s[i] == c)
			str = (char *)s + i;
		i++;
	}
	if (s[i] == c)
		return (char *)(s + i);
	if (str != 0)
		return (str);
	return (0);
}
