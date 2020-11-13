/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 11:02:54 by resther           #+#    #+#             */
/*   Updated: 2020/02/17 12:21:53 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		match(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == '\0' && *s2 == '*')
	{
		return (match(s1, (s2 + 1)));
	}
	if (*s1 == *s2)
	{
		return (match((s1 + 1), (s2 + 1)));
	}
	if (*s1 != *s2 && *s2 == '*' && *s1 != '\0')
	{
		return (match((s1 + 1), s2) || match(s1, (s2 + 1)));
	}
	if (*s1 != *s2 && *s2 != '*')
	{
		return (0);
	}
	else
	{
		return (0);
	}
}

int		main(void)
{
	printf("%d", match("***S****", "****S*******"));
	return (0);
	}

