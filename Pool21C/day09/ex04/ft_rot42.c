/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 19:42:55 by resther           #+#    #+#             */
/*   Updated: 2020/02/13 20:26:19 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int t;

	t = 0;
	while (str[t] != '\0')
	{
		if (str[t] >= 'A' && str[t] <= 'Z')
		{
			if (str[t] <= 'J')
				str[t] += 16;
			else
				str[t] -= 10;
		}
		if (str[t] >= 'a' && str[t] <= 'z')
		{
			if (str[t] <= 'j')
				str[t] += 16;
			else
				str[t] -= 10;
		}
		t++;
	}
	return (str);
}
