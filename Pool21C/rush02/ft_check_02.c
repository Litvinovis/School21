/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_02.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uerma <uerma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 20:25:24 by ftorn             #+#    #+#             */
/*   Updated: 2020/02/23 18:40:18 by uerma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_check_02(int i, int j, t_fuc **begin_fuc)
{
	t_fuc *bf;

	bf = *begin_fuc;
	while (bf)
	{
		if ((bf->x == 0 && bf->y == 0 && bf->c == 'A')
			|| (bf->x == i - 1 && bf->y == 0 && bf->c == 'A'))
			bf = bf->next;
		else if ((bf->x == 0 && bf->y == j - 1 && bf->c == 'C')
				|| (bf->x == i - 1 && bf->y == j - 1 && bf->c == 'C'
				&& j != 1 && i != 1))
			bf = bf->next;
		else if ((bf->y == 0 && bf->c == 'B') ||
				(bf->y == j - 1 && bf->c == 'B') ||
				(bf->x == 0 && bf->c == 'B') ||
				(bf->x == i - 1 && bf->c == 'B'))
			bf = bf->next;
		else if (bf->x == i && bf->c == '\n')
			bf = bf->next;
		else if (bf->c == ' ')
			bf = bf->next;
		else
			return (-1);
	}
	return (2);
}
