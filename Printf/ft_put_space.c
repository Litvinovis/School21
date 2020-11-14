/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_space.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/26 22:12:31 by resther           #+#    #+#             */
/*   Updated: 2020/07/29 13:17:14 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_put_space(int broad, int len, int letter)
{
	int	result;

	result = 0;
	while (broad - len > 0)
	{
		if (letter)
			ft_putchar_fd(' ');
		else
			ft_putchar_fd('0');
		result++;
		broad--;
	}
	return (result);
}
