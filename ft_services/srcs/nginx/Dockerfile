FROM alpine

RUN apk update && \
    apk add nginx openssh supervisor && \
    mkdir run/nginx && touch run/nginx/nginx.pid && \
    echo "root:root" | chpasswd

COPY srcs/serv.conf              /etc/nginx/conf.d/default.conf
COPY srcs/supervisord.conf       /etc/supervisord.conf
COPY srcs/nginx-selfsigned.crt   /etc/ssl/certs/
COPY srcs/nginx-selfsigned.key   /etc/ssl/certs/

COPY srcs/ssh_host_rsa_key.pub /etc/ssh/
COPY srcs/ssh_host_rsa_key /etc/ssh/
RUN chmod 400 /etc/ssh/ssh_host_rsa_key
COPY srcs/sshd_config /etc/ssh/

COPY srcs/start.sh          /var/
EXPOSE 80 443 22
CMD sh /var/start.sh