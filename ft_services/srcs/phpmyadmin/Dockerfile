FROM alpine

RUN apk update && apk upgrade
RUN apk add nginx \
            supervisor \
            php7 php7-fpm php7-opcache php7-json php7-iconv php7-mbstring php7-gettext \
		    php7-gd php7-mysqli php7-zlib php7-curl php7-session php7-phar \
		    wget
RUN mkdir -p /run/nginx /run/php 

RUN wget http://files.directadmin.com/services/all/phpMyAdmin/phpMyAdmin-5.0.2-all-languages.tar.gz && \
    tar zxvf phpMyAdmin-5.0.2-all-languages.tar.gz && \
    rm phpMyAdmin-5.0.2-all-languages.tar.gz && \
    mv phpMyAdmin-5.0.2-all-languages /var/www/phpmyadmin && \
    chmod -R 777 /var/www/
 
COPY srcs/nginx.conf         /etc/nginx/conf.d/default.conf
COPY srcs/supervisord.conf  /etc/supervisord.conf
COPY srcs/config.inc.php    /var/www/phpmyadmin/
COPY srcs/start.sh          /var/start.sh

RUN chmod 755 /var/www/phpmyadmin/config.inc.php

EXPOSE 5000
CMD sh /var/start.sh