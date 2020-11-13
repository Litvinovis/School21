/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 19:05:39 by resther           #+#    #+#             */
/*   Updated: 2020/02/21 22:25:04 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	t_btree *new;

	new = *root;
	while (new)
	{
		if (cmpf(item, new->item) < 0)
		{
			new->left = btree_create_node(item);
		}
		else
		{
			new->right = btree_create_node(item);
		}
	}
}
