FROM alpine

RUN apk update && apk upgrade
RUN apk add wget

RUN wget -q -O /etc/apk/keys/sgerrand.rsa.pub https://alpine-pkgs.sgerrand.com/sgerrand.rsa.pub \
	&& wget https://github.com/sgerrand/alpine-pkg-glibc/releases/download/2.32-r0/glibc-2.32-r0.apk \
	&& apk add glibc-2.32-r0.apk

RUN wget https://dl.grafana.com/oss/release/grafana-7.2.0.linux-amd64.tar.gz \
	&& tar -zxf grafana-7.2.0.linux-amd64.tar.gz \
	&& mv grafana-7.2.0 /grafana \
	&& rm -f grafana-7.2.0.linux-amd64.tar.gz \
	&& cp /grafana/conf/defaults.ini /etc/grafana.ini

COPY srcs/grafana.db		/grafana/data/

WORKDIR /grafana/bin/
EXPOSE 3000
CMD ["./grafana-server"]