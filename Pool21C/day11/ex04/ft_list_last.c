/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 16:33:23 by resther           #+#    #+#             */
/*   Updated: 2020/02/19 19:10:47 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *new;

	if (!begin_list)
	{
		return (0);
	}
	new = begin_list;
	while (new->next)
	{
		new = new->next;
	}
	return (new);
}
