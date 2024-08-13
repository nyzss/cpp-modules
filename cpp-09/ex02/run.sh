#!/bin/bash

N_ARGS=3000

PROGRAM=./Pmerge

make

rand() {
    seq 0 100000 | shuf -n $N_ARGS | tr '\n' ' '
}

run() {
	$PROGRAM $(rand)
}

for i in {1..1} ;
	do run ;
done