/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 20:16:41 by resther           #+#    #+#             */
/*   Updated: 2020/02/19 21:56:37 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	new;
	int		a;

	a = 0;
	new = begin_list;
	while (new)
	{
		new->data = f(new->data);
		new = new->next;
		a++;
	}
}
