#!/bin/bash

kubectl delete deployments phpmyadmin
kubectl delete service phpmyadmin

docker build -t pma_image .
kubectl apply -f pma.yaml