/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 17:48:43 by resther           #+#    #+#             */
/*   Updated: 2020/02/19 19:42:03 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *new;
	t_list *sec;

	new = *begin_list;
	if (!new)
	{
		return (0);
	}
	while (new)
	{
		new = sec;
		free(new);
		new = sec->next;
	}
	*begin_list = 0;
}
