/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_which_letter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/26 21:37:39 by resther           #+#    #+#             */
/*   Updated: 2020/07/26 21:37:43 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_which_letter(char c)
{
	if ((c == 'c' || c == 's'))
		return (1);
	else if ((c == 'p') || (c == 'd'))
		return (1);
	else if ((c == 'i') || (c == 'u'))
		return (1);
	else if ((c == 'x') || (c == 'X'))
		return (1);
	else if (c == '%')
		return (1);
	else
		return (0);
}
