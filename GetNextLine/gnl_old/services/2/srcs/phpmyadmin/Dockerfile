FROM alpine

RUN apk update
RUN apk add vim
RUN apk add php7-mbstring php7-session php7-json php7-mysqli 
RUN apk add php
RUN mkdir -p /usr/share/webapps/
RUN wget http://files.directadmin.com/services/all/phpMyAdmin/phpMyAdmin-5.0.2-all-languages.tar.gz
RUN tar zxvf phpMyAdmin-5.0.2-all-languages.tar.gz
RUN rm phpMyAdmin-5.0.2-all-languages.tar.gz
RUN mv phpMyAdmin-5.0.2-all-languages /usr/share/webapps/phpmyadmin

COPY ./src/config.inc.php /usr/share/webapps/phpmyadmin/
COPY ./src/start.sh .

EXPOSE 5000

CMD [ "sh", "start.sh" ]