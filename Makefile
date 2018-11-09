# sets the default compiler to gcc instead of cc
CC=gcc
CFlags=-g
# Comment the next line to turn off optimization 
CFlags+=-O

all: main int_divide

# rule to make a main file with the dependency main.c
main: main.c

int_divide: int_divide.c 
