/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 12:11:22 by resther           #+#    #+#             */
/*   Updated: 2020/02/12 16:16:19 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_params(char *str)
{
	int r;

	r = 0;
	while (str[r] != '\0')
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
		ft_print_params(argv[q]);
		ft_putchar('\n');
		q++;
	}
	return (0);
}
