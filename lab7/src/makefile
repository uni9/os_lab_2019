CC=gcc
VPATH=../../lab6/src/

all: tcpclient tcpserver udpclient udpserver

tcpclient : tcpclient.c
	$(CC) $^ -o $@ -DBUFSIZE=100 -D'SIZE=sizeof(struct sockaddr_in)' -D'SADDR=struct sockaddr'

tcpserver : tcpserver.c
	$(CC) $^ -o $@ -DSERV_PORT=10050 -DBUFSIZE=100 -D'SADDR=struct sockaddr'

udpclient : udpclient.c
	$(CC) $^ -o $@ -DSERV_PORT=20001 -DBUFSIZE=1024 -D'SADDR=struct sockaddr' -D'SLEN=sizeof(struct sockaddr_in)'

udpserver : udpserver.c
	$(CC) $^ -o $@ -DSERV_PORT=20001 -DBUFSIZE=1024 -D'SADDR=struct sockaddr' -D'SLEN=sizeof(struct sockaddr_in)'
