/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 15:29:03 by resther           #+#    #+#             */
/*   Updated: 2020/09/10 12:20:34 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# define BUFFER_SIZE 10

char	*malloc_extend(char *buf, char *buf_tmp);
int		emergency_exit(char *buf_tmp, int i);
char	*buff_plus(char *temp, char *buf, int e, char **line);
int		get_next_line(const int fd, char **line);

#endif
