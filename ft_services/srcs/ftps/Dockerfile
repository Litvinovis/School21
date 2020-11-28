  
FROM alpine

RUN apk update && apk upgrade && \
	apk add openssl vsftpd && \
	echo 'root:root' | chpasswd

COPY srcs/ftps.crt			/etc/ssl/private/
COPY srcs/ftps.key			/etc/ssl/private/
COPY srcs/vsftpd.conf		/etc/vsftpd/vsftp_ftps.conf
COPY srcs/start.sh			/var/

EXPOSE 21
CMD sh /var/start.sh
