/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 14:00:22 by resther           #+#    #+#             */
/*   Updated: 2020/02/09 15:58:57 by etowelie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	tline(int x, char a, char b)
{
	ft_putchar(a);
	while (x > 2)
	{
		ft_putchar(b);
		x--;
	}
	if (x > 1)
	{
		ft_putchar(a);
	}
	ft_putchar('\n');
}

void	middle(int x, int y, char c)
{
	int r;

	y -= 2;
	while (y > 0)
	{
		r = x;
		ft_putchar(c);
		while (r > 2)
		{
			ft_putchar(' ');
			r--;
		}
		y--;
		if (r > 1)
		{
			ft_putchar(c);
		}
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	char a;
	char b;
	char c;

	a = 'o';
	b = '-';
	c = '|';
	if (y == 1 && x == 1)
	{
		ft_putchar(a);
		ft_putchar('\n');
	}
	else
	{
		tline(x, a, b);
		middle(x, y, c);
		if (y > 1)
		{
			tline(x, a, b);
		}
	}
}
