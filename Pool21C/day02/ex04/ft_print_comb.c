/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 15:49:52 by resther           #+#    #+#             */
/*   Updated: 2020/02/06 10:02:06 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = 47;
	while (a++ <= 54)
	{
		b = a;
		while (b++ <= 55)
		{
			c = b;
			while (c++ <= 56)
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
				if (a != 55)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
