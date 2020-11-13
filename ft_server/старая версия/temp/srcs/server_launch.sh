#!bin/bash

# start services
service mysql start
service php7.3-fpm start
service nginx start

# DB access config
mysql -e "CREATE DATABASE site_db;"
mysql -e "CREATE USER 'resther'@'localhost' IDENTIFIED BY '17771';"
mysql -e "GRANT ALL PRIVILEGES ON site_db.* TO 'resther'@'localhost' IDENTIFIED BY '17771';"
mysql -e "FLUSH PRIVILEGES;"

bash
