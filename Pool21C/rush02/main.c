/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uerma <uerma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 15:21:59 by uerma             #+#    #+#             */
/*   Updated: 2020/02/23 18:18:23 by uerma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_fuc	*create_node(char val, int x, int y)
{
	t_fuc *new;

	new = malloc(sizeof(t_fuc));
	new->c = val;
	new->x = x;
	new->y = y;
	new->next = NULL;
	return (new);
}

void	push(t_fuc **head, char val, int x, int y)
{
	t_fuc *current;

	current = *head;
	if (current)
	{
		while (current->next)
			current = current->next;
		current->next = create_node(val, x, y);
	}
	else
		*head = create_node(val, x, y);
}

void	print_res(int x, int y, int last, int *check)
{
	int i;

	i = 0;
	if (last == -2)
	{
		ft_putstr("it doesn't feel like rush...\n");
		return ;
	}
	while (i < 5)
	{
		if (check[i] != -1)
		{
			ft_putstr("[rush-0");
			ft_putnbr(check[i]);
			ft_putstr("] [");
			ft_putnbr(x);
			ft_putstr("] [");
			ft_putnbr(y);
			ft_putstr("]");
			if (last != check[i])
				ft_putstr(" || ");
		}
		i++;
	}
	ft_putchar('\n');
}

void	do_rest(int x, int y, t_fuc **head)
{
	int check[6];
	int i;
	int last;

	i = 0;
	last = -2;
	check[0] = ft_check_00(x, y, head);
	check[1] = ft_check_01(x, y, head);
	check[2] = ft_check_02(x, y, head);
	check[3] = ft_check_03(x, y, head);
	check[4] = ft_check_04(x, y, head);
	check[5] = -1;
	while (i < 5)
	{
		if (check[i] != -1)
			last = check[i];
		i++;
	}
	print_res(x, y, last, check);
}

int		main(void)
{
	int		x;
	int		y;
	char	buf[1];
	int		xx;
	t_fuc	*head;

	x = 0;
	y = 0;
	xx = 0;
	head = NULL;
	while (read(0, buf, 1))
	{
		push(&head, buf[0], xx, y);
		xx++;
		if (buf[0] == '\n')
		{
			x = xx - 1;
			y++;
			xx = 0;
		}
	}
	do_rest(x, y, &head);
	return (0);
}
