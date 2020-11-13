/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etowelie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 14:18:30 by etowelie          #+#    #+#             */
/*   Updated: 2020/02/09 15:47:24 by etowelie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	middle(int x, int y)
{
	int i;
	int r;

	if (y > 1)
	{
		r = 0;
		while (r < (y - 2))
		{
			ft_putchar('\n');
			ft_putchar('B');
			i = 0;
			while (i < (x - 2))
			{
				ft_putchar(' ');
				i++;
			}
			if (x > 1)
				ft_putchar('B');
			r++;
		}
	}
}

void	end(int x, int y)
{
	int i;

	if (x > 0 && y > 1)
	{
		ft_putchar('\n');
		ft_putchar('C');
		i = 0;
		while (i < (x - 2))
		{
			ft_putchar('B');
			i++;
		}
		if (x > 1)
			ft_putchar('C');
	}
	if (x > 0 && y > 0)
		ft_putchar('\n');
}

void	rush(int x, int y)
{
	int i;

	if (x > 0 && y > 0)
		ft_putchar('A');
	i = 0;
	while (i < (x - 2) && y > 0)
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1 && y > 0)
		ft_putchar('A');
	middle(x, y);
	end(x, y);
}
