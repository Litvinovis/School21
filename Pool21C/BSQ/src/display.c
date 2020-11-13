/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 14:53:43 by jalvaro           #+#    #+#             */
/*   Updated: 2020/02/26 23:11:25 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_filler(char **arr, t_point *pnt, int *key)
{
	int i;
	int j;
	int value;

	value = pnt->value - '0';
	i = 0;
	while (i < value)
	{
		j = 0;
		while (j < value)
		{
			arr[pnt->y - i][pnt->x - j] = key[3];
			j++;
		}
		i++;
	}
	i = 0;
	while (arr[i] != 0)
	{
		ft_putstr(arr[i]);
		write(1, "\n", 1);
		i++;
	}
}

void	ft_remover(char **arr, t_point *pnt, int *key)
{
	int		i;
	int		j;

	i = 0;
	while (arr[i] != 0)
	{
		j = 0;
		while (arr[i][j] != '\0')
		{
			if (arr[i][j] == '0')
				arr[i][j] = key[2];
			else
				arr[i][j] = key[1];
			j++;
		}
		i++;
	}
	ft_filler(arr, pnt, key);
}

void	ft_scanner(char **arr, int *key)
{
	t_point *pnt;
	int		i;
	int		j;

	pnt = (t_point *)malloc(sizeof(t_point));
	pnt->value = '0';
	pnt->y = 0;
	pnt->x = 0;
	i = 0;
	while (arr[i] != 0)
	{
		j = 0;
		while (arr[i][j] != '\0')
		{
			if (pnt->value < arr[i][j])
			{
				pnt->value = arr[i][j];
				pnt->y = i;
				pnt->x = j;
			}
			j++;
		}
		i++;
	}
	ft_remover(arr, pnt, key);
}
