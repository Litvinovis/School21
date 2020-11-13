
minikube start  --disk-size='5000mb' --memory='2000mb'
minikube addons enable metallb
minikube addons enable dashboard

eval $(minikube docker-env)
docker build -t nginx srcs/nginx/
docker build -t phpmyadmin srcs/phpmyadmin/
docker build -t mysql srcs/mysql/
docker build -t ftps srcs/ftps/
docker build -t wordpress srcs/wordpress/
docker build -t grafana srcs/grafana/
docker build -t influxdb srcs/influxdb/
docker build -t telegraf srcs/addit_confs/telegraf/

kubectl apply -f https://raw.githubusercontent.com/metallb/metallb/v0.9.3/manifests/namespace.yaml
kubectl apply -f https://raw.githubusercontent.com/metallb/metallb/v0.9.3/manifests/metallb.yaml
kubectl create secret generic -n metallb-system memberlist --from-literal=secretkey="$(openssl rand -base64 128)"
kubectl apply -f srcs/addit_confs/metallb-config.yaml

kubectl apply -f srcs/addit_confs/persistant_volumes.yaml
kubectl apply -f srcs/ftps/ftps.yaml
kubectl apply -f srcs/nginx/nginx.yaml
kubectl apply -f srcs/phpmyadmin/phpmyadmin.yaml
kubectl apply -f srcs/mysql/mysql.yaml
kubectl apply -f srcs/wordpress/wordpress.yaml
kubectl apply -f srcs/grafana/grafana.yaml
kubectl apply -f srcs/influxdb/influxdb.yaml
kubectl apply -f srcs/addit_confs/telegraf/telegraf.yaml

minikube dashboard