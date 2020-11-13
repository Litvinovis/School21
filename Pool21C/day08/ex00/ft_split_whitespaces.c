/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:29:06 by resther           #+#    #+#             */
/*   Updated: 2020/02/15 22:50:20 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	ft_fill_array(char *str)
{
	int word;
	int b;
	int a;

	word = 0;
	b = 0;
	a = 0;
	if (str[a] == 0)
		return (0);
	while (str[a] != '\0')
	{
		if (str[a] == '\t' || str[a] == ' ' || str[a] == '\n')
		{
			word = 0;
		}
		else if (word == 0)
		{
			word = 1;
			b++;
		}
		a++;
	}
	return (b);
}

int		ft_dlina(char *str, int i)
{
	int l;

	l = 0;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
	{
		if (str[i] != '\0')
		{
			l = l + 1;
			i = i + 1;
		}
	}
	return (l);
}

char	**ft_split_whitespaces(char *str)
{
	char	**q;
	int		x;
	int		m;
	int		k;

	x = 0;
	m = 0;
	q = (char**)malloc(sizeof(char*) * ft_fill_array(str) + 1);
	while (ft_fill_array(str) > m && str[x] != '\0')
	{
		k = 0;
		while (str[x] == '\n' || str[x] == '\t' || str[x] == ' ')
			x++;
		q[m] = (char*)malloc(sizeof(char) * ft_dlina(str, x) + 1);
		while (str[x] != '\t' && str[x] != '\0' &&
		str[x] != ' ' && str[x] != '\n')
		{
			q[m][k++] = str[x++];
		}
		q[m][k] = '\0';
		m++;
	}
	return (q);
}
