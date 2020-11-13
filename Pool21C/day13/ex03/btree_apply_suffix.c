/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 18:59:01 by resther           #+#    #+#             */
/*   Updated: 2020/02/21 22:05:25 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (root->left)
	{
		btree_apply_suffix(root->left, *applyf);
	}
	if (root->right)
	{
		btree_apply_suffix(root->right, applyf);
	}
	apllyf(root->item);
}
