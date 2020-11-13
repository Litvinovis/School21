/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 21:10:45 by resther           #+#    #+#             */
/*   Updated: 2020/02/19 21:56:49 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
							void *data_ref, int (*cmp)(void *, void *))
{
	t_list	*new;

	new = begin_list;
	while (new)
	{
		if (new->data == *data_ref)
		{
			new->data = f(new->data);
		}
		new = new->next;
	}
}
