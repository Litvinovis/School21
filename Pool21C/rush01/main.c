/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 20:39:03 by resther           #+#    #+#             */
/*   Updated: 2020/02/16 20:39:38 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	main(int argc, char **argv)
{
	if (argc != 10)
	{
		putstr(Error);
		return (0);
	}
	else 
	{
		ft_fill_array(argv[1], argv[2], argv[3], argv[4], argv[5],
			  	argv[6], argv[7], argv[8], argv[9]);
	}
}
