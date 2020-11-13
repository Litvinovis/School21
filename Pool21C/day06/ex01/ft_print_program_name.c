/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 21:35:28 by resther           #+#    #+#             */
/*   Updated: 2020/02/12 16:15:36 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_program_name(char *str)
{
	int e;

	e = 0;
	while (str[e] != '\0')
	{
		ft_putchar(str[e]);
		e++;
	}
}

int		main(int argc, char **argv)
{
	if (argc > 0)
	{
		ft_print_program_name(argv[0]);
		ft_putchar('\n');
	}
	return (0);
}
