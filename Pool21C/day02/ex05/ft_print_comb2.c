/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 17:28:24 by resther           #+#    #+#             */
/*   Updated: 2020/02/06 12:26:02 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)

void	ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;
	int e;
	int r;
	char y[4];

	e = 0;
	while (e < 99)
	{
		r = (e + 1);
 		y[0] = '0' + e / 10;
		y[1] = '0' + e % 10;
		e++;
		while (r < 100 )
		{
			y[2] = '0' + r / 10;
			y[3] = '0' + r % 10;
			ft_putchar(y[0]);
			ft_putchar(y[1]);
			ft_putchar(' ');
			ft_putchar(y[2]);
			ft_putchar(y[3]);
			ft_putchar(',');
			ft_putchar(' ');
			r++;
		}
	}
}
