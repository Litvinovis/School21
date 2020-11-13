/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 13:59:30 by resther           #+#    #+#             */
/*   Updated: 2020/02/11 14:30:05 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int r;
	int b;

	r = 0;
	b = 1;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[r] != '\0')
	{
		if ((str[r] < 'a' || str[r] > 'z') && (str[r] < 'A' || str[r] > 'Z'))
		{
			b = 0;
		}
		r++;
	}
	return (b);
}