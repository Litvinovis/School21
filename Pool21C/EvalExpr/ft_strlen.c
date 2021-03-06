/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 23:12:51 by resther           #+#    #+#             */
/*   Updated: 2020/02/22 20:28:34 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_strlen(char *str)
{
	int r;

	r = 0;
	while (str[r] != '\0')
	{
		r++;
	}
	return (r);
}
