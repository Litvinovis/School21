/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 13:36:31 by resther           #+#    #+#             */
/*   Updated: 2020/05/24 10:55:18 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_onlyset(char c, char const *set)
{
	int		r;

	r = 0;
	while (set[r])
	{
		if (set[r] == c)
			return (1);
		r++;
	}
	return (0);
}

static int	ft_quantity(char const *s1, char const *set)
{
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s1);
	while (ft_onlyset(s1[len - i - 1], set))
		i++;
	return (len - i);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		size;
	char	*str;

	start = 0;
	size = 0;
	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	while (ft_onlyset(s1[start], set))
		start++;
	if (start == (int)ft_strlen(s1))
		return (ft_strdup(""));
	size = ft_quantity(s1 + start, set);
	if (!(str = (char *)malloc(sizeof(char) * (++size))))
		return (NULL);
	ft_strlcpy(str, s1 + start, size);
	return (str);
}
