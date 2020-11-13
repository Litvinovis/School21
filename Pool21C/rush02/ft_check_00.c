/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_00.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uerma <uerma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 18:26:02 by ftorn             #+#    #+#             */
/*   Updated: 2020/02/23 14:21:05 by uerma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_check_00(int i, int j, t_fuc **begin_fuc)
{
	t_fuc *bf;

	bf = *begin_fuc;
	while (bf)
	{
		if ((bf->x == 0 && bf->y == 0 && bf->c == 'o')
			|| (bf->x == i - 1 && bf->y == 0 && bf->c == 'o'))
			bf = bf->next;
		else if ((bf->x == 0 && bf->y == j - 1 && bf->c == 'o')
			|| (bf->x == i - 1 && bf->y == j - 1 && bf->c == 'o'))
			bf = bf->next;
		else if ((bf->y == 0 && bf->c == '-') ||
				(bf->y == j - 1 && bf->c == '-'))
			bf = bf->next;
		else if ((bf->x == 0 && bf->c == '|') ||
				(bf->x == i - 1 && bf->c == '|'))
			bf = bf->next;
		else if (bf->x == i && bf->c == '\n')
			bf = bf->next;
		else if (bf->c == ' ')
			bf = bf->next;
		else
			return (-1);
	}
	return (0);
}
