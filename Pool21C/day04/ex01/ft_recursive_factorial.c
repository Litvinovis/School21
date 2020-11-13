/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 20:04:09 by resther           #+#    #+#             */
/*   Updated: 2020/02/08 18:25:48 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb > 0 && nb < 13)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else if (nb == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
