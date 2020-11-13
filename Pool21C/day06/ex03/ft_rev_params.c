/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 14:23:36 by resther           #+#    #+#             */
/*   Updated: 2020/02/12 16:17:09 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_rev_params(char *str)
{
	int d;

	d = 0;
	while (str[d] != '\0')
	{
		ft_putchar(str[d]);
		d++;
	}
}

int		main(int argc, char **argv)
{
	int r;

	r = (argc - 1);
	while (r > 0)
	{
		ft_rev_params(argv[r]);
		ft_putchar('\n');
		r--;
	}
	return (0);
}
