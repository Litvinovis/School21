/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm_test.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 15:01:35 by resther           #+#    #+#             */
/*   Updated: 2020/10/16 19:55:03 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_TEST_H
# define LIBASM_TEST_H
# include <unistd.h>
# include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <stdlib.h>
#include <errno.h>

typedef struct	s_list
{
		void			*include;
		struct s_list	*next;
}				t_list;

int			ft_strcmp(const char *s1, const char *s2);
int			ft_list_size(t_list *begin_list);
size_t		ft_strlen(const char *s);
char 		*ft_strcpy(char *dst, const char *src);
void		*malloc(size_t size);
ssize_t		ft_write(int fildes, const void *buf, size_t nbyte);
char		*ft_strdup(const char *s1);
ssize_t		ft_read(int fildes, const void *buf, size_t nbyte);
#endif