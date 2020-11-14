#! /bin/bash
if [[ $# -eq 0 ]]; then
    echo "не указан параметр'$0 on\off'"
    exit 1
fi
if [[ $1 == "on" || $1 == "off" ]]; then
    echo "переключаю автоиндекс на $1"
	sed -i -e "s/autoindex [a-z]*/autoindex $1/" /etc/nginx/sites-available/site
    echo "Перезапуск nginx"
    service nginx restart
else
    echo "Undefined options. Usage: '$0 on\off'"
fi