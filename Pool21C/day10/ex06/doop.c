/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 18:43:58 by resther           #+#    #+#             */
/*   Updated: 2020/02/17 19:40:05 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int a;
	int b;
	int c;

	a = 0;
	c = 0;
	while (str[a] == ' ' || str[a] == '\n' || str[a] == '\t' ||
			str[a] == '\v' || str[a] == '\f' || str[a] == '\r')
		a++;
	if (str[a] == '+' && str[a + 1] >= '0' && str[a + 1] <= '9')
		a++;
	if (str[a] == '-' && str[a + 1] >= '0' && str[a + 1] <= '9')
	{
		b = -1;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		c = c * 10;
		c = c + (str[a] - '0');
		a++;
	}
	if (b == -1)
		return (-c);
	return (c);
}

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int r;
	int t;

	r = 0;
	t = 0;
	while (s1[r] == s2[r] && r <= n)
	{
		r++;
	}
	if (s1[r] == s2[r])
		return (0);
	else
	{
		t = s1[r] - s2[r];
		return (t);
	}
}

int		main(void)
{
	unsigned int	n;
	char			*t;
	char			*r;

	n = 12;
	ft_atoi(r);
	ft_strncmp(t, r, n);
	return (0);
}
