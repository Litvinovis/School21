# <p align=center> ft_services </p>

The project consists of setting up an infrastructure of different services used Kubernetes. Each service run in a dedicated container, containers builds using Alpine Linux. Also, they have my own a Docker file which is called in the setup.sh. forbidden to take already build images or use services like DockerHub.

This server will run multiples services: Wordpress, phpMyAdmin, nginx, mysql, grafana, influxdb (+ telegraf), ftps.


 ![alt text](https://blog.jetbrains.com/wp-content/uploads/2015/10/phpstorm-large_v-trans.png)

for use:

```
bash setup.sh
```