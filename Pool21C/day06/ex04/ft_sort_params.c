/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 14:38:52 by resther           #+#    #+#             */
/*   Updated: 2020/02/12 19:06:35 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_sort_params(char *str)
{
	int r;

	r = 0;
	while (str[r] != 0)
	{
		ft_putchar(str[r]);
		r++;
	}
}

int		main(int argc, char **argv)
{
	int q;

	q = 0;
	while (q < argc)
	{
		ft_sort_params(argv[q + 1]);
		ft_putchar('\n');
		ft_sort_params(argv[q]);
		ft_putchar('\n');
		q++;
	}
}
