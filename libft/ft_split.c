/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 14:48:45 by resther           #+#    #+#             */
/*   Updated: 2020/05/24 11:05:38 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_words(char const *s, char c)
{
	int			sep;
	int			r;

	sep = 0;
	r = 0;
	if (!s)
		return (-1);
	while (*s != '\0')
	{
		if (*s == c)
			sep = 0;
		else if (sep == 0)
		{
			sep = 1;
			r++;
		}
		s++;
	}
	return (r);
}

static int		ft_length(char const *s, int q, char c)
{
	int			len;

	len = 0;
	while ((s[q] != c) && (s[q] != '\0'))
	{
		len++;
		q++;
	}
	return (len);
}

static void		**ft_free_mass(char const **dst, int i)
{
	while (i >= 0)
	{
		free((void *)dst[i]);
		i--;
	}
	free(dst);
	return (NULL);
}

char			**ft_split(char const *s, char c)
{
	char		**mass;
	int			i;
	int			a;
	int			b;

	i = 0;
	a = 0;
	if (!(mass = (char**)malloc(sizeof(char*) * ft_words(s, c) + 1)))
		return (NULL);
	while (s[i] != '\0' && a < ft_words(s, c))
	{
		b = 0;
		while (s[i] == c)
			i++;
		if (!(mass[a] = (char*)malloc(sizeof(char) * ft_length(s, i, c) + 1)))
		{
			ft_free_mass((char const **)mass, a);
			return (NULL);
		}
		while ((s[i] != c) && (s[i] != '\0'))
			mass[a][b++] = s[i++];
		mass[a++][b] = '\0';
	}
	mass[a] = 0;
	return (mass);
}
