/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 19:42:59 by resther           #+#    #+#             */
/*   Updated: 2020/02/19 21:56:00 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int a;

	a = 0;
	if (!begin_list)
	{
		*begin_list = 0;
		return (begin_list);
	}
	while (a < nbr)
	{
		begin_list = begin_list->next;
		a++;
	}
	return (begin_list);
}
