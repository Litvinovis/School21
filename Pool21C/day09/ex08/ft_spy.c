/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 23:45:42 by resther           #+#    #+#             */
/*   Updated: 2020/02/14 01:01:20 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int y;

	y = 0;
	while (str[y] != '\0')
	{
		ft_putchar(str[y]);
		y++;
	}
}

char	*ft_strlowcase(char *str)
{
	int r;

	r = 0;
	while (str[r] != '\0')
	{
		if (str[r] >= 'A' && str[r] <= 'Z')
			str[r] += 32;
		r++;
	}
	return (str);
}

int		ft_strcmp(char *s1, char *s2)
{
	int r;
	int t;

	t = 0;
	r = 0;
	while (s2[t] == ' ')
		t++;
	while (s1[r] == s2[t] && s1[r] != '\0' && s2[t] != '\0')
	{
		r++;
		t++;
	}
	if (s1[r] == s2[t])
		return (0);
	else
		return (1);
}

int		main(int argc, char **argv)
{
	int	r;
	int p;
	int i;

	i = 0;
	p = 0;
	r = 0;
	while (p < argc)
	{
		if (ft_strcmp("president", ft_strlowcase(argv[i])) == 0)
			r = 1;
		if (ft_strcmp("bauer", ft_strlowcase(argv[i])) == 0)
			r = 1;
		if (ft_strcmp("attack", ft_strlowcase(argv[i])) == 0)
			r = 1;
		p++;
		i++;
	}
	if (r == 1)
	{
		ft_putstr("Alert!!!");
		ft_putchar('\n');
	}
	return (0);
}
