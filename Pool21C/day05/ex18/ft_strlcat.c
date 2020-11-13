/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 16:06:58 by resther           #+#    #+#             */
/*   Updated: 2020/02/11 19:15:54 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int ld;
	unsigned int ls;
	unsigned int e;
	unsigned int q;

	ld = 0;
	ls = 0;
	while (dest[ld] != '\0')
		ld++;
	while (src[ls] != '\0')
		ls++;
	e = ls - ls;
	q = ls + ld;
	ld++;
	while (dest[ld] != '\0' && ld < (ls < q))
	{
		dest[ld] = src[ld];
		ld++;
	}
	dest[ld] = '\0';
	return (e);
}
