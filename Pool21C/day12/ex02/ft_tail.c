/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 21:18:19 by resther           #+#    #+#             */
/*   Updated: 2020/02/20 21:23:39 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int r;

	r = 0;
	while (str[r] != '\0')
	{
		ft_putchar(str[r]);
		r++;
	}
}

void	ft_tail(char *file)


int		main(int argc, char **argv)
{
	if (argc < 2)
		ft_putstr("File name missing\n");
	if (argc > 2)
		ft_putstr("Too many arguments\n");
	if (argc == 2)
		ft_display_file(argv[1]);
	return (0);
}

