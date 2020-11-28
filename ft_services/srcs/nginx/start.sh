#!/bin/bash

kubectl delete deployments nginx
kubectl delete service nginx

docker build -t nginx_image .
kubectl apply -f nginx.yaml