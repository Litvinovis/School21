# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_nicolas_bauer.sh                              :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: resther <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/13 17:46:22 by resther           #+#    #+#              #
#    Updated: 2020/02/13 18:48:47 by resther          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash
pr-b4% grep -i -w "nicolas" phonebook | grep -i -w "bauer" | grep '[0-9][0-9][0-9]-[0-9][0-9][0-9]'
