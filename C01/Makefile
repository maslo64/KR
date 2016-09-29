CC=gcc
CFLAGS=-Wall -g

all:	$(patsubst %.c, %.out, $(wildcard *.c))

%.out:	%.c Makefile
	gcc $< -o $@ 

clean: 
	rm -f *.out


