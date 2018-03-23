
CC=cc
CXX=CC
CCFLAGS=-g -std=c99 -Wall -Werror 


%.o : %.c

	$(CC) -c $(CCFLAGS) $<

main: main.o functions.o auxfunctions.o
	$(CC) -o main main.o functions.o auxfunctions.o

clean:
	rm *.o
