/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 14:48:29 by resther           #+#    #+#             */
/*   Updated: 2020/02/11 14:51:14 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int r;

	r = 0;
	if (str[0] == '\0')
		return (1);
	while (str[r] != '\0')
	{
		if (str[r] < 'A' || str[r] > 'Z')
			return (0);
		r++;
	}
	return (1);
}