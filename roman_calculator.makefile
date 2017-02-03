CFLAGS=-Wall
LIBS=-lcheck -lm -lrt -lpthread

all: roman_calculator

roman_calculator: main.o roman_calculator.o string_util.o roman_calculator_util.o
	gcc -o roman_calculator main.o roman_calculator.o string_util.o roman_calculator_util.o

main.o: main.c roman_calculator.h string_util.h
	gcc $(CFLAGS) -c main.c

roman_calculator.o: roman_calculator.c roman_calculator.h
	gcc $(CFLAGS) -c roman_calculator.c

string_util.o: string_util.c string_util.h
	gcc $(CFLAGS) -c string_util.c

roman_calculator_util.o: roman_calculator_util.c roman_calculator_util.h
	gcc $(CFLAGS) -c roman_calculator_util.c




test: roman_calculator-test string_util-test roman_calculator_util-test 

roman_calculator-test: roman_calculator-test.o roman_calculator.o roman_calculator_util.o string_util.o
	gcc -o roman_calculator-test roman_calculator.o roman_calculator-test.o roman_calculator_util.o string_util.o $(LIBS)

roman_calculator-test.o: roman_calculator-test.c roman_calculator.h
	gcc $(CFLAGS) -c roman_calculator-test.c

roman_calculator_util-test: roman_calculator_util-test.o roman_calculator_util.o string_util.o
	gcc -o roman_calculator_util-test roman_calculator_util.o roman_calculator_util-test.o string_util.o $(LIBS)

roman_calculator_util-test.o: roman_calculator_util-test.c roman_calculator_util.h
	gcc $(CFLAGS) -c roman_calculator_util-test.c

string_util-test: string_util-test.o string_util.o
	gcc -o string_util-test string_util.o string_util-test.o $(LIBS)

string_util-test.o: string_util-test.c string_util.h
	gcc $(CFLAGS) -c string_util-test.c
