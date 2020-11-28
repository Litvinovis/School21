#!/bin/bash

kubectl delete deployments mysql-deployment
kubectl delete service mysql-svc
kubectl delete pvc mysql-pvc
kubectl delete pv mysql-pv

docker build -t mysql_image .
kubectl apply -f pv.yaml
kubectl apply -f mysql.yaml
