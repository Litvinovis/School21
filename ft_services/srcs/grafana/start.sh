#!/bin/bash

kubectl delete deployments grafana
kubectl delete service grafana

docker build -t grafana_image .
kubectl apply -f grafana.yaml