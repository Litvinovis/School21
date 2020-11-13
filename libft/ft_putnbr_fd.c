/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 18:35:15 by resther           #+#    #+#             */
/*   Updated: 2020/05/17 21:00:17 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_putchar_fd('-', fd);
			ft_putchar_fd('2', fd);
			ft_putnbr_fd(147483648, fd);
		}
		if (n != -2147483648)
			ft_putchar_fd('-', fd);
		n = n * -1;
	}
	if (n < 10 && n != -2147483648)
		ft_putchar_fd(n + '0', fd);
	else if (n > 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else if (n == 10)
	{
		ft_putchar_fd('1', fd);
		ft_putchar_fd('0', fd);
	}
}
