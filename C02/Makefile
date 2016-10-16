CC=gcc
CFLAGS=-Wall -g

all:	$(patsubst %.c, %.out, $(wildcard *.c))

%.out:	%.c Makefile
	$(CC) $(CFLAGS) $< -o $@

clean: 
	rm -f *.out


