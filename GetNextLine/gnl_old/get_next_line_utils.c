/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 16:00:40 by resther           #+#    #+#             */
/*   Updated: 2020/06/23 23:34:13 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t		ft_strlen(const char *s)
{
	size_t	r;

	r = 0;
	while (s[r])
	{
		r++;
	}
	return (r);
}

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

char		*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == '\0' && c == '\0')
		return ((char *)s);
	return (NULL);
}

void		*ft_calloc(size_t q, size_t size)
{
	void	*s;
	size_t	a;

	a = 0;
	if (!(s = malloc(q * size)))
		return (NULL);
	if (s == 0)
		return (0);
	while (q * size > a)
	{
		((char*)s)[a] = 0;
		a++;
	}
	return (s);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		r;
	int		s1_len;
	int		s2_len;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str = (char*)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (str == NULL)
		return (NULL);
	r = -1;
	while (s1[++r])
		str[r] = s1[r];
	r = -1;
	while (s2[++r])
	{
		str[s1_len] = s2[r];
		s1_len++;
	}
	str[s1_len] = '\0';
	return (str);
}
