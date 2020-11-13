/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 22:31:35 by resther           #+#    #+#             */
/*   Updated: 2020/02/08 18:13:21 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int b;

	b = nb;
	if (power <= 0 || nb == 0)
	{
		return (0);
	}
	else if (power == 1 || nb == 1)
	{
		return (nb);
	}
	else
	{
		while (power > 1)
		{
			b = b * nb;
			power--;
		}
	}
	return (b);
}
