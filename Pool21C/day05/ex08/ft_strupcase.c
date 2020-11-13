/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 10:34:51 by resther           #+#    #+#             */
/*   Updated: 2020/02/11 12:18:46 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int r;

	r = 0;
	while (str[r] != '\0')
	{
		if (str[r] >= 'a' && str[r] <= 'z')
			str[r] -= 32;
		r++;
	}
	return (str);
}
