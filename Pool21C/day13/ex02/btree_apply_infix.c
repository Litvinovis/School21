/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 18:46:01 by resther           #+#    #+#             */
/*   Updated: 2020/02/21 22:04:19 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root->left)
	{
		btree_apply_infix(root->left, applyf);
	}
	applyf(root->item);
	if (root->right)
	{
		btree_apply_infix(root->right, applyf);
	}
}
