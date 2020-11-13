/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 12:41:09 by resther           #+#    #+#             */
/*   Updated: 2020/02/23 16:04:38 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdlib.h>
# include <unistd.h>

int		ft_atoi(char **str);
int		ft_doop(int d1, int d2, char o);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_strlen(char *str);
char	*ft_split_whitespaces(char *str);
int		eval_expr(char *str);
int		ft_first(char **str);
int		ft_calc(char **str);

#endif
