/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uerma <uerma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 14:48:06 by uerma             #+#    #+#             */
/*   Updated: 2020/02/23 14:02:42 by uerma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>

typedef struct		s_fuc
{
	char			c;
	int				x;
	int				y;
	struct s_fuc	*next;
}					t_fuc;

int					ft_check_00(int i, int j, t_fuc **begin_fuc);
int					ft_check_01(int i, int j, t_fuc **begin_fuc);
int					ft_check_02(int i, int j, t_fuc **begin_fuc);
int					ft_check_03(int i, int j, t_fuc **begin_fuc);
int					ft_check_04(int i, int j, t_fuc **begin_fuc);
void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putnbr(int nb);

#endif
