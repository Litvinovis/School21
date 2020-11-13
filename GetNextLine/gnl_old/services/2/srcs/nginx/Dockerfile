FROM alpine

RUN apk update
RUN apk add nginx
RUN apk add openssl
RUN apk add openrc
RUN apk add openssh
RUN apk add supervisor
RUN adduser -D -g 'www' www
RUN echo -e "mypass\nmypass\n" | adduser zcolleen
RUN mkdir /www
RUN chown -R www:www /var/lib/nginx
RUN chown -R www:www /www
RUN mkdir /run/nginx
RUN mkdir /etc/nginx/ssl
RUN openssl req -x509 -nodes -days 365 -newkey rsa:2048 -keyout /etc/nginx/ssl/nginx.key -out /etc/nginx/ssl/nginx.crt -subj "/C=RF/ST=Moscow/L=Moscow/O=school21/OU=zcolleen/CN=my_domain"
RUN openrc default
RUN rc-service sshd start
RUN ssh-keygen -A
RUN rc-service sshd stop

COPY ./src/nginx_config /etc/nginx/nginx.conf
COPY ./src/index.html /www
COPY  ./src/supervisord.conf /etc/supervisord.conf

EXPOSE 80 443 22

CMD [ "/usr/bin/supervisord", "-c", "etc/supervisord.conf" ]