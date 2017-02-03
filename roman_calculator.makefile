CFLAGS=-Wall
LIBS=-lcheck -lm -lrt -lpthread

all: string_util

string_util: main.o string_util.o 
	gcc -o string_util main.o string_util.o

string_util.o: string_util.c string_util.h
	gcc $(CFLAGS) -c string_util.c




test: string_util-test  


string_util-test: string_util-test.o string_util.o
	gcc -o string_util-test string_util.o string_util-test.o $(LIBS)

string_util-test.o: string_util-test.c string_util.h
	gcc $(CFLAGS) -c string_util-test.c
