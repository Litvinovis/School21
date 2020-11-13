/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 17:24:43 by resther           #+#    #+#             */
/*   Updated: 2020/02/17 18:35:50 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, inti (*f)(int, int))
{
	int r;

	r = 0;
	if (f(tab[r], tab[r + 1]) >= 0)
	{
		while ((f(tab[r], tab[r + 1]) >= 0) && (r < length))
			r++;
		if (f(tab[r - 1], tab[r]) >= 0)
			return (1);
		else
			return (0);
	}
	else if ((f(tab[r], tab[r + 1]) <= 0) && r < length)
	{
		while (f(tab[r], tab[r + 1]) <= 0)
			r++;
		if (f(tab[r - 1], tab[r]) <= 0)
			return (1);
		else
			return (0);
	}
	else
		return (1);
}
