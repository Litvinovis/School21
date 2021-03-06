/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 14:41:57 by resther           #+#    #+#             */
/*   Updated: 2020/02/11 14:49:19 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int r;

	r = 0;
	if (str[0] == '\0')
		return (1);
	while (str[r] != '\0')
	{
		if (str[r] < 'a' || str[r] > 'z')
			return (0);
		r++;
	}
	return (1);
}
