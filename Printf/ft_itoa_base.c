/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 13:07:26 by resther           #+#    #+#             */
/*   Updated: 2020/07/26 22:04:22 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_itoa_base(unsigned long long nbr, int base)
{
	char				*string;
	unsigned long long	number;
	size_t				size;

	size = 0;
	number = nbr;
	if (!nbr)
		return (ft_strdup("0"));
	while (number)
	{
		size++;
		number = number / base;
	}
	if (!(string = malloc(sizeof(char) * (++size))))
		return (NULL);
	string[--size] = '\0';
	while (nbr)
	{
		string[--size] = (nbr % base) + (nbr % base > 9 ? '7' : '0');
		nbr = nbr / base;
	}
	return (string);
}
