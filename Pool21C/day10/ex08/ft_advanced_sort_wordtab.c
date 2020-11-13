/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 20:05:37 by resther           #+#    #+#             */
/*   Updated: 2020/02/17 20:09:37 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_fill_array(char *str)
{
	int word;
	int b;
	int a;

	word = 0;
	b = 0;
	a = 0;
	if (str[a] == 0)
		return (0);
	while (str[a] != '\0')
	{
		if (str[a] == '\t' || str[a] == ' ' || str[a] == '\n')
		{
			word = 0;
		}
		else if (word == 0)
		{
			word = 1;
			b++;
		}
		a++;
	}
	return (b);
}

int		ft_dlina(char *str, int i)
{
	int l;

	l = 0;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
	{
		if (str[i] != '\0')
		{
			l = l + 1;
			i = i + 1;
		}
	}
	return (l);
}

char	**ft_split_whitespaces(char *str)
{
	char	**q;
	int		x;
	int		m;
	int		k;

	x = 0;
	m = 0;
	q = ft_fill_array(str) + 1;
	while (ft_fill_array(str) > m && str[x] != '\0')
	{
		x++;
		m++;
	}
	return (q);
}

void	ft_advanced_sort_wordtab(char **tab, int(*cmp)(char *, char *));
{
	ft_fill_array(**tab);
	return (0);
}
