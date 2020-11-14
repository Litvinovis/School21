/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 18:52:32 by resther           #+#    #+#             */
/*   Updated: 2020/05/24 10:59:03 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	r;
	size_t	d;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	r = 0;
	d = ft_strlen(s + start);
	if (d < len)
		len = d;
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (r < len)
	{
		str[r] = s[start + r];
		r++;
	}
	str[r] = '\0';
	return (str);
}
