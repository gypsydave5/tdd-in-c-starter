CC=gcc
CFLAGS=-std=c11 -Wall -pedantic -g3
PERF=-pg
PROD=-O2

ut: add_test
	./add_test

build: adder

adder: main.o
	$(CC) $(CFLAGS) -o $@ $^

main.o: main.c add.h

add: add.o
	$(CC) $(CFLAGS) -o $@ $^

add_test: add.o add_test.o
	$(CC) $(CFLAGS) -o $@ $^

add_test.o: add_test.c add.h

add.o: add.c

