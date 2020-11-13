FROM alpine

RUN apk update
RUN apk add php7
RUN apk add php7-mysqli
RUN apk add php7-json
RUN apk add php7-mbstring
RUN apk add php7-session

RUN mkdir -p /usr/share/webapps/
RUN wget http://wordpress.org/latest.tar.gz
RUN tar -xzvf latest.tar.gz -C /etc/
RUN rm -rf latest.tar.gz

COPY ./src/start.sh .
COPY ./src/wp-config.php /etc/wordpress/wp-config.php

CMD [ "sh", "start.sh" ]

EXPOSE 5050