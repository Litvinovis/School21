/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 14:53:28 by resther           #+#    #+#             */
/*   Updated: 2020/02/11 21:50:00 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int r;

	r = 0;
	if (str[0] == '\0')
		return (1);
	while (str[r] != '\0')
	{
		if (str[r] >= 32 || str[r] < 127)
			return (0);
		r++;
	}
	return (1);
}
