/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 22:46:05 by resther           #+#    #+#             */
/*   Updated: 2020/02/13 23:29:04 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base != 1)
	{
		if (base % 2 == 0)
		{
			return (ft_collatz_conjecture(base / 2) + 1);
		}
		else
		{
			return (ft_collatz_conjecture((base * 3) + 1) + 1);
		}
	}
	return (base - 1);
}
