/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 14:42:50 by resther           #+#    #+#             */
/*   Updated: 2020/05/21 15:15:05 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*new;

	if (!(lst))
		return ;
	while (*lst)
	{
		del((*lst)->content);
		new = *lst;
		*lst = new->next;
		free(new);
	}
	*lst = NULL;
}
