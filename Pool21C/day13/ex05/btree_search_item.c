/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 19:40:17 by resther           #+#    #+#             */
/*   Updated: 2020/02/21 22:39:37 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	if (cmpf(data_ref, root->item) == 0)
	{
		return (root->item);
	}
	if (root->right)
	{
		return (btree_search_item(root->right, data_ref, cmpf));
	}
	if (root->left)
	{
		return (btree_search_item(root->left, data_ref, cmpf));
	}
	return (0);
}
