/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 12:13:55 by jalvaro           #+#    #+#             */
/*   Updated: 2020/02/10 14:52:39 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_printnum(int nb)
{
	if (nb >= 0)
	{
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putchar((nb * -1) + '0');
	}
}

void	ft_putnbr(int nb)
{
	int		count;
	int		buff;

	count = 1;
	buff = nb;
	if (nb < 0)
	{
		ft_putchar('-');
	}
	while (buff / 10 >= 1 || buff / 10 <= -1)
	{
		count = count * 10;
		buff = buff / 10;
	}
	buff = nb;
	while (count >= 10)
	{
		buff = nb / count;
		ft_printnum(buff);
		nb = nb - (buff * count);
		count = count / 10;
	}
	ft_printnum(nb);
}
