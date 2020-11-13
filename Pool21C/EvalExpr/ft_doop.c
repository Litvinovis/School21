/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 23:14:49 by resther           #+#    #+#             */
/*   Updated: 2020/02/23 16:02:38 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_doop(int c1, int c2, char o)
{
	if (o == '+')
		return (c1 + c2);
	else if (o == '-')
		return (c1 - c2);
	else if (o == '/')
		return (c1 / c2);
	else if (o == '*')
		return (c1 * c2);
	else if (o == '%')
		return (c1 % c2);
	else
		return (0);
}
