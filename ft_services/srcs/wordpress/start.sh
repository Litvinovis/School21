#!/bin/bash

kubectl delete deployments wordpress-deployment
kubectl delete service wordpress-svc

docker build -t wordpress_image .
kubectl apply -f wordpress.yaml