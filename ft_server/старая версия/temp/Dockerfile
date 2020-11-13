# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Dockerfile                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: resther <resther@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/23 15:18:29 by resther           #+#    #+#              #
#    Updated: 2020/08/29 19:28:27 by resther          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FROM debian:buster

RUN apt-get update && apt-get -y upgrade
RUN apt-get update && apt-get install -y \
		nginx \
		openssl \
		mariadb-server \
		wget \
		php7.3-fpm \
		php7.3-common \
		php7.3-mysql \
		php7.3-gmp \
		php7.3-curl \
		php7.3-intl \
		php7.3-mbstring \
		php7.3-xmlrpc \
		php7.3-gd \
		php7.3-xml \
		php7.3-cli \
		php7.3-zip \
		php7.3-soap \
		php7.3-imap

RUN mkdir /etc/nginx/ssl
RUN	openssl req -newkey rsa:2048 -x509 -sha256 -days 365 -nodes -out /etc/nginx/ssl/site.crt -keyout /etc/nginx/ssl/site.key \
	-subj "/C=RU/ST=Bashkortostan/L=Ufa/O=21school/OU=vault/CN=resther"

RUN wget -c https://www.phpmyadmin.net/downloads/phpMyAdmin-latest-english.tar.xz
RUN	mkdir /var/www/site /var/www/site/phpmyadmin /var/www/site/phpmyadmin/tmp
RUN	tar -xvf phpMyAdmin-latest-english.tar.xz --strip-components 1 -C /var/www/site/phpmyadmin

RUN	wget -c https://wordpress.org/latest.tar.gz
RUN	tar -xvf latest.tar.gz --strip-components 1 -C /var/www/site

RUN	rm -f latest.tar.gz
RUN	rm -f phpMyAdmin-latest-english.tar.xz

COPY /srcs/server_launch.sh .
COPY /srcs/autoindex.sh .
COPY /srcs/config.inc.php /var/www/site/phpmyadmin/
COPY /srcs/nginx.conf /etc/nginx/sites-available/site
COPY /srcs/wp-config.php /var/www/site/

RUN	ln -s /etc/nginx/sites-available/site /etc/nginx/sites-enabled/
RUN	rm -f /etc/nginx/sites-enabled/default
RUN	chown -R www-data:www-data /var/www/site
RUN	find /var/www/site/ -type d -exec chmod 755 {} \;
RUN	find /var/www/site/ -type f -exec chmod 644 {} \;
RUN	chmod +x server_launch.sh autoindex.sh

EXPOSE 80 443

CMD bash server_launch.sh
