/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 17:33:13 by resther           #+#    #+#             */
/*   Updated: 2020/02/13 17:33:19 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int a;
	int b;

	if (hour > 12)
		a = (hour % 12);
	if (hour <= 12)
		a = hour;
	b = a + 1;
	if (hour == 0)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 A.M. AND 01.00 A.M.\n");
	if (hour > 0 && hour < 11)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN");
		printf(" %d.00 A.M. AND %d.00 A.M.\n", a, b);
	}
	if (hour == 11)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 A.M. AND 12.00 P.M.\n");
	if (hour == 12)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 P.M. AND 01.00 P.M.\n");
	if (hour > 12)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN");
		printf(" %d.00 P.M. AND %d.00 P.M.\n", a, b);
	}
}
