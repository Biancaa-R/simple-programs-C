CC = gcc
CFLAGS = -Wall

all: max_min

max_min: max_min.o
	$(CC) $(CFLAGS) -o max_min max_min.o

max_min.o: max_min.c
	$(CC) $(CFLAGS) -c max_min.c

.PHONY: clean

clean:
	rm -f *.o max_min.exe

