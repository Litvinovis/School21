#!/bin/bash

kubectl delete deployments influxdb
kubectl delete service influxdb
kubectl delete pvc influxdb-pvc
kubectl delete pv influxdb-pv

docker build -t influxdb_image .
kubectl apply -f pv.yaml
kubectl apply -f influxdb.yaml