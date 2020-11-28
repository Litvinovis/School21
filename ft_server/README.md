# <p align=center> ft_server </p>

The goal of this project is to launch a server based on docker technology.
This server will run multiples services: Wordpress, phpMyAdmin, nginx and a SQL database.


 ![alt text](https://blog.jetbrains.com/wp-content/uploads/2015/10/phpstorm-large_v-trans.png)

for use:

```
docker build -t name .
docker run --name aname -it -p 80:80 -p 443:443 name
```