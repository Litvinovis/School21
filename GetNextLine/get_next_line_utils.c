/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 16:00:40 by resther           #+#    #+#             */
/*   Updated: 2020/06/25 23:31:46 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*malloc_extend(char *buf, char *temp)
{
	char		*new_temp;
	int			r;
	int			t;

	r = 0;
	t = 0;
	while (temp[t] != '\0')
		t++;
	while (buf[r] != '\n' && r < BUFFER_SIZE)
		r++;
	t += r;
	if (!(new_temp = (char *)malloc(++t)))
		return (NULL);
	while (t-- > 0)
		new_temp[t] = '\0';
	t = 0;
	while (temp[t] != '\0')
	{
		new_temp[t] = temp[t];
		t++;
	}
	free(temp);
	return (new_temp);
}

int		emergency_exit(char *temp, int r)
{
	free(temp);
	temp = NULL;
	return (r);
}
