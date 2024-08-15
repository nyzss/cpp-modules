#!/bin/bash

N_ARGS=3000

NUMBER="${1:-1}"

PROGRAM=./PmergeMe

make

rand() {
    seq 0 100000 | shuf -n $N_ARGS | tr '\n' ' '
}

run() {
	$PROGRAM $(rand)
}

for ((i=1; i<=NUMBER; i++)); do
    run
done