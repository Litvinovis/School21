/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 13:57:49 by jalvaro           #+#    #+#             */
/*   Updated: 2020/02/26 23:13:42 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# define BUFF_SIZE 1
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

typedef struct	s_point
{
	int		y;
	int		x;
	char	value;
}				t_point;

void			ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_atoi(char *str);
int				ft_strlen(char *str);
char			*ft_file_start(char *start, int *key, int fd);
char			**ft_second_line(int *key, char **arr, int fd);
char			**ft_algoritm(char **q, char a);
void			ft_scanner(char **arr, int *key);
void			ft_putnbr(int nb);

#endif
