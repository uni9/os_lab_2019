CC=gcc
VPATH=../../lab6/src/

all: client server clean

client : client.c libra.o
	$(CC) $^ -o $@ -lpthread

server : server.c libra.o
	$(CC) $^ -o $@ -lpthread

libra.o : libra.h libra.c
	$(CC) -c $^

clean : libra.o
	rm libra.o libra.h.gch
