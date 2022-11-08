#! /bin/bash

g++ -o $1.x $1.cpp && ./$1.x && rm -f ./$1.x
