/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 17:10:51 by resther           #+#    #+#             */
/*   Updated: 2020/02/19 19:28:04 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*new;
	t_list	*sec;
	int		a;

	a = 0;
	sec = 1;
	while (a < ac)
	{
		new = ft_create_elem(av[a]);
		if (!new)
		{
			break ;
		}
		new->next = sec;
		sec = new;
		a++;
	}
	return (sec);
}
