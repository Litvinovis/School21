/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 16:00:48 by resther           #+#    #+#             */
/*   Updated: 2020/06/25 23:32:03 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char		*buff_plus(char *temp, char *buf, int e, char **line)
{
	int		r;

	r = 0;
	while (temp[r] != '\0')
		r++;
	while (BUFFER_SIZE > e)
	{
		if (buf[e] == '\n')
		{
			temp[r + e++] = '\0';
			*line = temp;
			r = 0;
			while (e != BUFFER_SIZE)
				buf[r++] = buf[e++];
			e = r;
			while (e != BUFFER_SIZE)
				buf[e++] = '\0';
			return (NULL);
		}
		temp[r + e] = buf[e];
		buf[e++] = '\0';
	}
	return (temp);
}

int			get_next_line(int fd, char **line)
{
	static char	buf[BUFFER_SIZE + 1];
	char		*temp;
	int			exit;

	if (!(temp = malloc(1)))
		return (emergency_exit(temp, -1));
	temp[0] = '\0';
	if (!line || BUFFER_SIZE <= 0)
		return (emergency_exit(temp, -1));
	exit = 1;
	while (exit > 0)
	{
		if (buf[0] == '\0')
			exit = read(fd, buf, BUFFER_SIZE);
		if (exit == -1 || !(temp = malloc_extend(buf, temp)))
			return (emergency_exit(temp, exit));
		if (!(temp = buff_plus(temp, buf, 0, line)))
			return (1);
	}
	if (exit < 0)
		return (emergency_exit(temp, -1));
	*line = temp;
	temp = NULL;
	return (0);
}
