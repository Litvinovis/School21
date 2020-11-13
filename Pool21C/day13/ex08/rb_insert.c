/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_insert.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 22:48:08 by resther           #+#    #+#             */
/*   Updated: 2020/02/21 23:27:39 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rb_insert(struct s_rb_node **root,
		void *data, int (*cmpf)(void *, void *));
{
	s_rb_node *new;

	new = *root;
	while (root)
	{
		cmpf(root->data, data);
	}
	return (0);
}
