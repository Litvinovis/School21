/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 15:29:03 by resther           #+#    #+#             */
/*   Updated: 2020/06/23 21:44:15 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 10

# include <fcntl.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

char	*ft_strcpy(char *dst, const char *src);
char	*check_stop(char *stop, char **line);
int		get_next_line(const int fd, char **line);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *str);
char	*ft_strchr(const char *s, int c);
void	*ft_calloc(size_t q, size_t size);
char	*ft_strjoin(char const *s1, char const *s2);
int		main(int ac, char **av);

#endif
