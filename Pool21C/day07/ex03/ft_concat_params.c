/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 11:41:41 by resther           #+#    #+#             */
/*   Updated: 2020/02/13 18:58:33 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv)
{
	int *r;
	int l;
	int a;

	l = 0;
	a = 0;
	while (argc > l)
	{
		while (argv[a][l] != '\0')
		{
			a++;
			l++;
		}
	}
	return (argv[argc]);
}
