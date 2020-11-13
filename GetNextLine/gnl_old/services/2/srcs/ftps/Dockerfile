FROM alpine


RUN apk add vsftpd
RUN echo -e "mypass\nmypass\n" | adduser zcolleen --home /home/zcolleen
RUN apk add openssl
RUN openssl req -x509 -nodes -days 365 -newkey rsa:2048 -keyout /etc/ssl/ftp.key -out /etc/ssl/ftp.crt -subj "/C=RF/ST=Moscow/L=Moscow/O=school21/OU=zcolleen/CN=my_domain"


RUN echo test > test_file_root
RUN echo test > /home/zcolleen/test_file
RUN chown zcolleen:zcolleen /home/zcolleen/


COPY  ./src/vsftpd.conf ./etc/vsftpd/vsftpd.conf
COPY ./src/start.sh .

EXPOSE 21 20 21000-22000

CMD [ "sh", "start.sh" ]
