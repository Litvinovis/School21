/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 16:00:48 by resther           #+#    #+#             */
/*   Updated: 2020/06/23 23:54:06 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char		*ft_strcpy(char *dst, const char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

void		ft_strclr(char *s)
{
	if (s)
	{
		while (*s)
		{
			*s = '\0';
			s++;
		}
	}
}

char		*check_stop(char *stop, char **line)
{
	char *p_n;

	p_n = NULL;
	if (stop)
	{
		if ((p_n = ft_strchr(stop, '\n')))
		{
			*p_n = '\0';
			*line = ft_strdup(stop);
			ft_strcpy(stop, ++p_n);
		}
		else
		{
			*line = ft_strdup(stop);
			ft_strclr(stop);
		}
	}
	else
		*line = ft_calloc((sizeof(char)), BUFF_SIZE);
	return (p_n);
}

int			get_next_line(const int fd, char **line)
{
	static char		*stop;
	char			buf[BUFF_SIZE + 1];
	int				char_read;
	char			*p_n;
	char			*tmp;

	p_n = check_stop(stop, line);
	while (!p_n && (char_read = read(fd, buf, BUFF_SIZE)))
	{
		if (char_read == -1)
			return (-1);
		buf[char_read] = '\0';
		if ((p_n = ft_strchr(buf, '\n')))
		{
			*p_n = '\0';
			p_n++;
			stop = ft_strdup(p_n);
		}
		tmp = *line;
		if (!(*line = ft_strjoin(*line, buf)))
			return (-1);
		free(tmp);
	}
	if (char_read || ft_strlen(stop))
		return (1);
	else
	{
		return (0);
	}
}

/* int		main(int argc, char **argv)
{
	int		fd;
	char	*line;

	if (argc == 1)
		fd = 0;
	else if (argc == 2)
		fd = open(argv[1], O_RDONLY);
	else
		return (2);
	while (get_next_line(fd, &line) == 1)
	{
		printf("%s\n", line);
		free(line);
	}
	printf("%s\n", line);
	free(line);
	if (argc == 2)
		close(fd);
}
*/
/* int			main(int ac, char **av)
{
	char	*line;
	int		fd1;

	fd1 = open(av[1], O_RDONLY);
	get_next_line(fd1, &line);
	printf("%s\n\n", line);
	free(line);
	get_next_line(fd1, &line);
	printf("%s\n\n", line);
	free(line);
	get_next_line(fd1, &line);
	printf("%s\n\n", line);
	free(line);
	get_next_line(fd1, &line);
	printf("%s\n\n", line);
	free(line);
	close(fd1);
	return (0);
}
*/