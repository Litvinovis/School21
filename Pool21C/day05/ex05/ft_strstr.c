/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 20:38:30 by resther           #+#    #+#             */
/*   Updated: 2020/02/10 21:51:27 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int l;
	int a;
	int b;

	l = 0;
	a = 0;
	b = 0;
	while (to_find[l] != '\0')
	{
		l++;
	}
	if (l == 0)
		return (str);
	while (str[a] != '\0')
	{
		if (str[a] == to_find[b])
			b++;
		else
			b = 0;
		if (b == l)
			return (str + (a - 1));
		a++;
	}
	return (0);
}
