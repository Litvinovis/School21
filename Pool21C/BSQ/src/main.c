/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 19:18:02 by jalvaro           #+#    #+#             */
/*   Updated: 2020/02/26 23:13:08 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_start(int fd)
{
	char	*start;
	char	**arr;
	int		*key;
	int		i;

	i = 0;
	start = (char *)malloc(sizeof(char) * 16);
	key = (int *)malloc(sizeof(int) * 5);
	start = ft_file_start(start, key, fd);
	if (start == 0)
		return (0);
	arr = (char **)malloc(sizeof(char *) * (key[0] + 1));
	arr = ft_second_line(key, arr, fd);
	if (arr == 0)
		return (0);
	arr = ft_algoritm(arr, key[1]);
	ft_scanner(arr, key);
	return (1);
}

int		main(int ac, char **av)
{
	int fd;
	int i;

	i = 1;
	if (ac == 1 && !(ft_start(0)))
	{
		write(1, "map error\n", 10);
		return (0);
	}
	else
	{
		while (av[i])
		{
			fd = open(av[i], O_RDONLY);
			if (fd == -1)
				write(1, "map error\n", 10);
			else if (!(ft_start(fd)))
				write(1, "map error\n", 10);
			if (i < ac - 1)
				write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
