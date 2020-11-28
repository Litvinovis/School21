FROM alpine

RUN apk add influxdb supervisor && \
	apk add telegraf --repository http://dl-3.alpinelinux.org/alpine/edge/testing/ --allow-untrusted --no-cache && \
	mkdir -p /etc/telegraf

VOLUME /var/lib/influxdb

COPY srcs/start.sh /var/
COPY srcs/supervisord.conf /etc/
COPY srcs/telegraf.conf /etc/telegraf/

EXPOSE 8086

CMD sh /var/start.sh
