# Переменная хранит типа название используемого компилятора
CC=gcc
# Переменная хранит флаги для компилятора
# В данном случае заголовочные файлы ищем в текущей папке
CFLAGS=-I.

# здесь сборка всего проекта
all: sequential_min_max parallel_min_max clean

# делаем исполняемый файл sequential_min_max
sequential_min_max : utils.o find_min_max.o utils.h find_min_max.h
	$(CC) -o sequential_min_max find_min_max.o utils.o sequential_min_max.c $(CFLAGS)

# делаем исполняемый файл parallel_min_max
parallel_min_max : utils.o find_min_max.o utils.h find_min_max.h
	$(CC) -o parallel_min_max utils.o find_min_max.o parallel_min_max.c $(CFLAGS)

# объектный файл
utils.o : utils.h
	$(CC) -o utils.o -c utils.c $(CFLAGS)
# и тут тоже
find_min_max.o : utils.h find_min_max.h
	$(CC) -o find_min_max.o -c find_min_max.c $(CFLAGS)

# удаление вспомогательных файлов
clean :
	rm utils.o find_min_max.o
