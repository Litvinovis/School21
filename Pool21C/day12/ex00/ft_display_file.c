/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 21:29:22 by resther           #+#    #+#             */
/*   Updated: 2020/02/20 16:53:17 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

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

void	ft_display_file(char *file)
{
	int		t;
	int		r;
	char	buf[BUF_SIZE + 1];

	t = open(file, O_RDONLY);
	if (t == -1)
	{
		ft_putstr("Open() error");
	}
	r = read(t, buf, BUF_SIZE);
	while (r != 0)
	{
		buf[r] = '\0';
		ft_putchar(buf[r]);
		r++;
	}
}

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
