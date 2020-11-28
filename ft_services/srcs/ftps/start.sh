#!/bin/bash

kubectl delete deployments ftps
kubectl delete service ftps

docker build -t ftps_image .
kubectl apply -f ftps.yaml