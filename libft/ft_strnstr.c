/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 14:08:22 by resther           #+#    #+#             */
/*   Updated: 2020/05/18 13:28:20 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*str;
	size_t	little_len;
	size_t	j;
	size_t	i;

	str = (char *)big;
	if (!(little_len = ft_strlen(little)))
		return (str);
	if (ft_strlen(big) < little_len || len < little_len)
		return (NULL);
	i = 0;
	while (str[i] && i <= len - little_len)
	{
		j = 0;
		while (little[j] && little[j] == str[i + j])
			j++;
		if (j == little_len)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
