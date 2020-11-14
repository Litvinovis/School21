/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 15:06:37 by resther           #+#    #+#             */
/*   Updated: 2020/07/30 18:59:56 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct	s_arg
{
	int			p;
	int			mod;
	int			ad;
	int			null;
	int			m;
	int			broad;
	int			sign;
	int			point;
}				t_arg;

int				ft_printf(const char *line, ...);
int				ft_string_reader(char *line, va_list list);
t_arg			ft_fill_arg(void);
int				ft_find_letter(char *l, int r, t_arg *arg, va_list list);
t_arg			ft_broad_flag(t_arg arg, va_list list);
t_arg			ft_number_find(char t, t_arg arg);
int				ft_point_do(char *line, int r, t_arg *arg, va_list list);
int				ft_which_function(int d, t_arg arg, va_list list);
int				ft_which_letter(char c);
int				ft_print_c(char c, t_arg arg);
int				ft_print_s(char *line, t_arg arg);
int				ft_print_p(unsigned long long nbr, t_arg arg);
int				ft_print_d(int nbr, t_arg arg);
int				ft_print_u(unsigned int nbr, t_arg arg);
int				ft_print_x(unsigned int nbr, int lower, t_arg arg);
int				ft_print_procent(t_arg arg);
int				ft_putchar_fd(int c);
int				ft_putstr_fd(char *str, int len);
int				ft_put_space(int broad, int len, int letter);
char			*ft_itoa_base(unsigned long long nbr, int base);
char			*ft_string_lower(char *line);
size_t			ft_strlen(const char *s);
int				ft_tolower(int c);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_itoa(int n);
int				ft_isdigit(int c);
char			*ft_strdup(const char *str);

#endif
