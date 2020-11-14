/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 14:39:15 by resther           #+#    #+#             */
/*   Updated: 2020/05/16 14:11:30 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char *ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = '\0';
		n--;
		ptr++;
	}
}
