/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_letter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/26 21:28:06 by resther           #+#    #+#             */
/*   Updated: 2020/07/29 12:16:53 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_find_letter(char *l, int r, t_arg *arg, va_list list)
{
	while (l[r])
	{
		if (l[r] == '-')
			arg->ad = 1;
		if (l[r] == '0' && arg->broad == 0 && arg->ad == 0)
			arg->null = 1;
		if (ft_isdigit(l[r]))
			*arg = ft_number_find(l[r], *arg);
		if (l[r] == '*')
			*arg = ft_broad_flag(*arg, list);
		if (l[r] == '.')
			r = ft_point_do(l, r, arg, list);
		if (ft_which_letter(l[r]))
		{
			arg->mod = l[r];
			break ;
		}
		r++;
	}
	return (r);
}
