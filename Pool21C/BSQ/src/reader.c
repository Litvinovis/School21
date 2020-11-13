/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 13:56:50 by jalvaro           #+#    #+#             */
/*   Updated: 2020/02/26 23:13:17 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	**ft_file_reader(int fd, int count, int *key, char **arr)
{
	int		i;
	int		j;
	char	buf[BUFF_SIZE];

	i = 1;
	j = 0;
	while ((read(fd, buf, BUFF_SIZE)) && key[0] != 0)
	{
		if (buf[0] != '\n')
		{
			if ((buf[0] != key[1] && buf[0] != key[2]) || j > count)
				return (0);
			arr[i][j] = buf[0];
			j++;
			continue;
		}
		if (count != j)
			return (0);
		arr[i++][j] = '\0';
		j = 0;
		arr[i] = (char *)malloc(sizeof(char) * count + 1);
		key[0]--;
	}
	arr[i] = 0;
	return (arr);
}

char	*ft_realloc(char *str, int size)
{
	int		len;
	char	*arr_new;

	len = 0;
	arr_new = (char *)malloc(sizeof(char) * size + 2);
	while (len < size)
	{
		arr_new[len] = str[len];
		len++;
	}
	return (arr_new);
}

char	**ft_second_line(int *key, char **arr, int fd)
{
	int		count;
	int		j;
	int		i;
	char	buf[BUFF_SIZE];

	i = 1;
	j = 0;
	count = 0;
	while (read(fd, buf, BUFF_SIZE) && (buf[0] != '\n'))
	{
		if (buf[0] != key[2] && buf[0] != key[1])
			return (0);
		arr[0] = ft_realloc(arr[0], count);
		arr[0][j] = buf[0];
		count++;
		j++;
	}
	if (j == 0)
		return (0);
	arr[0][j] = '\0';
	arr[1] = (char *)malloc(sizeof(char) * count + 1);
	key[0]--;
	return (ft_file_reader(fd, count, key, arr));
}

char	*ft_file_start(char *start, int *key, int fd)
{
	int		ret;
	int		len;
	char	buf[BUFF_SIZE];

	len = 0;
	while ((ret = read(fd, buf, 1)) && (buf[0] != '\n'))
	{
		start[len] = buf[0];
		len++;
		if (len > 14)
			return (0);
	}
	start[len] = '\0';
	if (ft_strlen(start) < 4)
		return (0);
	key[3] = start[ft_strlen(start) - 1];
	key[2] = start[ft_strlen(start) - 2];
	key[1] = start[ft_strlen(start) - 3];
	key[4] = 0;
	start[ft_strlen(start) - 3] = '\0';
	if ((key[0] = ft_atoi(start)) <= 0 || key[3] == key[2] ||
		key[2] == key[1] || key[1] == key[3])
		return (0);
	return (start);
}
