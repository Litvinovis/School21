/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 21:27:07 by resther           #+#    #+#             */
/*   Updated: 2020/02/09 22:06:54 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	sastantua(int size)
{
	int r;

	r = size;
	while (r < 100)
	{
		ft_putchar('0');
		r++;
	}
}