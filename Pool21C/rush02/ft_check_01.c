/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_01.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uerma <uerma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 20:21:57 by ftorn             #+#    #+#             */
/*   Updated: 2020/02/23 14:21:05 by uerma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_check_01(int i, int j, t_fuc **begin_fuc)
{
	t_fuc *bf;

	bf = *begin_fuc;
	while (bf)
	{
		if ((bf->x == 0 && bf->y == 0 && bf->c == '/')
				|| (bf->x == i - 1 && bf->y == j - 1 && bf->c == '/'))
			bf = bf->next;
		else if ((bf->x == i - 1 && bf->y == 0 && bf->c == '\\')
				|| (bf->x == 0 && bf->y == j - 1 && bf->c == '\\'))
			bf = bf->next;
		else if ((bf->y == 0 && bf->c == '*')
				|| (bf->y == j - 1 && bf->c == '*'))
			bf = bf->next;
		else if ((bf->x == 0 && bf->c == '*') ||
				(bf->x == i - 1 && bf->c == '*'))
			bf = bf->next;
		else if (bf->x == i && bf->c == '\n')
			bf = bf->next;
		else if (bf->c == ' ')
			bf = bf->next;
		else
			return (-1);
	}
	return (1);
}
