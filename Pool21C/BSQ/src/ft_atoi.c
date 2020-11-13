/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 17:27:48 by jalvaro           #+#    #+#             */
/*   Updated: 2020/02/26 23:12:11 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_atoi(char *str)
{
	int a;
	int c;
	int b;

	a = 0;
	c = 0;
	while (str[a] == ' ' || str[a] == '\n' || str[a] == '\t' ||
			str[a] == '\v' || str[a] == '\f' || str[a] == '\r')
		a++;
	if (str[a] == '+' && str[a + 1] >= '0' && str[a + 1] <= '9')
		a++;
	if (str[a] == '-' && str[a + 1] >= '0' && str[a + 1] <= '9')
	{
		b = -1;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		c = c * 10;
		c = c + (str[a] - '0');
		a++;
	}
	if (b == -1)
		return (-c);
	return (c);
}