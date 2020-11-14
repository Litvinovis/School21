/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   screenshot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 12:59:48 by resther           #+#    #+#             */
/*   Updated: 2020/09/29 17:11:15 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int				count_words(char **str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	if (i != 2)
		return (0);
	return (1);
}

static int		header(unsigned char *bmp_fheader, \
unsigned char *bmpinfheader, t_goray *ray, t_base *img)
{
	int file_size;

	file_size = 14 + 40 + ray->ma->x * ray->ma->y * \
			img->bpp / 8;
	bmp_fheader[0] = 'B';
	bmp_fheader[1] = 'M';
	bmp_fheader[2] = (unsigned char)(file_size);
	bmp_fheader[3] = (unsigned char)(file_size >> 8);
	bmp_fheader[4] = (unsigned char)(file_size >> 16);
	bmp_fheader[5] = (unsigned char)(file_size >> 24);
	bmp_fheader[10] = (unsigned char)(14 + 40);
	bmpinfheader[0] = (unsigned char)(40);
	bmpinfheader[4] = (unsigned char)(ray->ma->x);
	bmpinfheader[5] = (unsigned char)(ray->ma->x >> 8);
	bmpinfheader[6] = (unsigned char)(ray->ma->x >> 16);
	bmpinfheader[7] = (unsigned char)(ray->ma->x >> 24);
	bmpinfheader[8] = (unsigned char)(-ray->ma->y);
	bmpinfheader[9] = (unsigned char)(-ray->ma->y >> 8);
	bmpinfheader[10] = (unsigned char)(-ray->ma->y >> 16);
	bmpinfheader[11] = (unsigned char)(-ray->ma->y >> 24);
	bmpinfheader[12] = (unsigned char)(1);
	bmpinfheader[14] = (unsigned char)(img->bpp);
	return (1);
}

static int		add_header(unsigned char *bmp_fheader,\
unsigned char *bmpinfheader, t_goray *ray, t_base *img)
{
	int		fd;
	char	*fname;
	int		line_len;
	int		i;

	i = 0;
	fname = "screenshot.bmp";
	if ((fd = open(fname, O_RDWR | O_CREAT, 0755)) < 0)
		return (0);
	write(fd, bmp_fheader, 14);
	write(fd, bmpinfheader, 40);
	line_len = img->bpp / 8 * ray->ma->x;
	while (i < ray->ma->y)
	{
		write(fd, img->addr + i * img->len_line, line_len);
		i++;
	}
	if (close(fd < 0))
	{
		ft_putstr_fd("can't close file\n", 0);
		return (0);
	}
	return (1);
}

int				source(t_goray *ray, t_base *img)
{
	unsigned char bmp_fheader[14];
	unsigned char bmpinfheader[40];

	ft_bzero(bmp_fheader, 14);
	ft_bzero(bmpinfheader, 40);
	header(bmp_fheader, bmpinfheader, ray, img);
	if (!(add_header(bmp_fheader, bmpinfheader, ray, img)))
		ft_putstr_fd("scr error\n", 0);
	close(0);
	return (0);
}
