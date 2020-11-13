/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 21:22:40 by resther           #+#    #+#             */
/*   Updated: 2020/02/21 22:44:31 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	btree_apply_by_level(t_btree *root, void (*applyf)(void *item,
			int current_level, int is_first_elem))
{
	t_btree	*new;
	int		r;
	int		t;

	new = root;
	r = 0;
	t = 1;
	while (root)
	{
		(*applyf)(root->item, r, t);
		r++;
		t++;
	}
}
