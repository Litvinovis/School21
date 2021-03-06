/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 22:30:46 by resther           #+#    #+#             */
/*   Updated: 2020/02/08 23:14:21 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int a;

	a = 2;
	while ((nb % a) != 0 && a < nb)
	{
		a++;
		if (a == nb)
		{
			return (1);
		}
	}
	return (0);
}
