
FROM alpine

RUN apk update
RUN apk add openrc
RUN apk add mysql mysql-client
RUN mkdir "/run/mysqld"
RUN chown -R mysql /run/mysqld

COPY src/file.sql ./
COPY src/wordpress.sql ./
COPY ./src/my.cnf /etc/my.cnf
COPY ./src/start.sh ./

EXPOSE 3306

CMD [ "sh", "start.sh" ]