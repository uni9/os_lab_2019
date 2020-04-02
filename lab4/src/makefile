CC=gcc
VPATH=../../lab3/src/
CFLAGS=-I../../lab3/src/

all: parallel_min_max zombies process_memory clean

parallel_min_max : utils.o find_min_max.o utils.h find_min_max.h
	$(CC) $^ $@.c -o $@ $(CFLAGS)

zombies :
	$(CC) $@.c -o $@

process_memory :
	$(CC) $@.c -o $@

# необъектные файлы
utils.o : utils.h
	$(CC) -c ../../lab3/src/utils.c -o utils.o $(CFLAGS)
find_min_max.o : utils.h find_min_max.h
	$(CC) -c ../../lab3/src/find_min_max.c -o find_min_max.o $(CFLAGS)

# удаление вспомогательных файлов
clean :
	rm utils.o find_min_max.o
