/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 23:10:02 by resther           #+#    #+#             */
/*   Updated: 2020/02/23 15:57:35 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			ft_putchar('-');
			ft_putchar('2');
			ft_putnbr(147483648);
		}
		if (nb != -2147483648)
			ft_putchar('-');
		nb = nb * -1;
	}
	if (nb < 10 && nb != -2147483648)
		ft_putchar(nb + '0');
	else if (nb > 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb == 10)
	{
		ft_putchar('1');
		ft_putchar('0');
	}
}
