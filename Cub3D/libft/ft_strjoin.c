/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 12:36:14 by resther           #+#    #+#             */
/*   Updated: 2020/05/18 15:41:36 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
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
