/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 12:32:09 by resther           #+#    #+#             */
/*   Updated: 2020/10/09 17:36:41 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

static int	check_arg(char **argv)
{
	int len;

	if (argv[1] == 0)
	{
		ft_putstr_fd("ERROR\nNEED AN ARGUMENT\n", 0);
		return (0);
	}
	len = ft_strlen(argv[1]);
	if (len < 4)
	{
		ft_putstr_fd("ERROR\nINCORRECT ARGUMENT\n", 0);
		return (0);
	}
	len = len - 4;
	if (ft_strncmp(".cub", &argv[1][len], 4) != 0)
	{
		ft_putstr_fd("ERROR\nWRONG FILE FORMAT\n", 0);
		return (0);
	}
	return (1);
}

int			main(int argc, char **argv)
{
	if (argc > 3)
	{
		ft_putstr_fd("ERROR\nWAY TOO ARGUMENTS\n", 0);
		return (0);
	}
	if (argc == 3 && (ft_strncmp("--save", argv[2], ft_strlen(argv[2])) != 0\
	|| ft_strncmp("--save", argv[2], 6) != 0))
	{
		ft_putstr_fd("ERROR\nSECOND ARGUMENT IS INCORRECT\n", 0);
		return (0);
	}
	if (check_arg(argv) == 0)
		return (0);
	if ((play(argv, argc)) == 0)
		exit(0);
	return (1);
}
