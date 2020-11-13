/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 15:14:33 by resther           #+#    #+#             */
/*   Updated: 2020/02/09 15:59:29 by etowelie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	tline(int x)
{
	ft_putchar('/');
	while (x > 2)
	{
		ft_putchar('*');
		x--;
	}
	if (x > 1)
	{
		ft_putchar('\\');
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
		ft_putchar('*');
		while (r > 2)
		{
			ft_putchar(' ');
			r--;
		}
		y--;
		if (r > 1)
		{
			ft_putchar('*');
		}
		ft_putchar('\n');
	}
}

void	bline(int x)
{
	ft_putchar('\\');
	while (x > 2)
	{
		ft_putchar('*');
		x--;
	}
	if (x > 1)
	{
		ft_putchar('/');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (y == 1 && x == 1)
	{
		ft_putchar('/');
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
