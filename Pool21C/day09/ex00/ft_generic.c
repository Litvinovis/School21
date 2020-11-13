/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 18:34:05 by resther           #+#    #+#             */
/*   Updated: 2020/02/13 18:44:02 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_generic(void)
{
	int t;

	t = 0;
	char r[] = "Tut tut ; Tut tut";
	while (r[t] != '\0')
	{
		fft_putchar(r[t]);
		t++;
	}
	fft_putchar('\n');
}
