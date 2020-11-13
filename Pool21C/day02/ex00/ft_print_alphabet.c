/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 10:16:20 by resther           #+#    #+#             */
/*   Updated: 2020/02/06 09:49:06 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)

void	ft_print_alphabet(void)
{
	char simbol;

	simbol = 'a';
	while (simbol <= 'z')
	{
		ft_putchar(simbol);
		simbol++;
	}
}
