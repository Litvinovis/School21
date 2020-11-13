/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 22:25:26 by resther           #+#    #+#             */
/*   Updated: 2020/02/23 16:01:22 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		eval_expr(char *str)
{
	int r;

	r = 0;
	if (str[r] == 0)
		return (0);
	else
	{
		str = ft_split_whitespaces(str);
	}
	return (ft_first(&str));
}
