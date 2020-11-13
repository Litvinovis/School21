/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 20:11:30 by resther           #+#    #+#             */
/*   Updated: 2020/02/21 22:45:23 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	btree_level_count(t_btree *root)
{
	 if (root)
	 {
		 return ((btree_level_count(root->left) + 1) || (btree_level_count(root->right) + 1))
	 }
	 else
	 {
		 return (0);
	 }
}
