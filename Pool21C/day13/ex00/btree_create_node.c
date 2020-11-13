/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 21:34:01 by resther           #+#    #+#             */
/*   Updated: 2020/02/21 22:11:09 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree *new;

	if (!(new = malloc(sizeof(new))))
	{
		return (NULL);
	}
	new->item = item;
	new->right = 0;
	new->left = 0;
	return (new);
}
