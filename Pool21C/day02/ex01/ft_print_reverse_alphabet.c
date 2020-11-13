/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 12:59:07 by resther           #+#    #+#             */
/*   Updated: 2020/02/06 09:58:58 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)

void	ft_print_reserve_alphabet(void)
{
	char sim;

	sim = 'z';
	while (sim >= 'a')
	{
		ft_putchar(sim);
		sim--;
	}
}
