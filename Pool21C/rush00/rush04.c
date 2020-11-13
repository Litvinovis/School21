/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jglossu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 15:56:18 by jglossu           #+#    #+#             */
/*   Updated: 2020/02/09 16:14:50 by jglossu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	tline(int x)
{
	ft_putchar('A');
	while (x > 2)
	{
		ft_putchar('B');
		x--;
	}
	if (x > 1)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	middle(int x, int y)
{
	int r;

	y -= 2;
	while (y > 0)
	{
		r = x;
		ft_putchar('B');
		while (r > 2)
		{
			ft_putchar(' ');
			r--;
		}
		y--;
		if (r > 1)
		{
			ft_putchar('B');
		}
		ft_putchar('\n');
	}
}

void	bline(int x)
{
	ft_putchar('C');
	while (x > 2)
	{
		ft_putchar('B');
		x--;
	}
	if (x > 1)
	{
		ft_putchar('A');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (y == 1 && x == 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
	}
	else
	{
		tline(x);
		middle(x, y);
		if (y > 1)
		{
			bline(x);
		}
	}
}
