/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 15:14:11 by resther           #+#    #+#             */
/*   Updated: 2020/02/08 17:57:55 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int a;

	if (power < 0)
	{
		return (0);
	}
	else if (power == 1 || nb == 1)
	{
		return (nb);
	}
	else if (power > 0)
	{
		a = nb * ft_recursive_power(nb, (power - 1));
		return (a);
	}
	else
	{
		return (1);
	}
}
