CC = gcc
CFLAGS = -Wall

all: power

power: power.o
	$(CC) $(CFLAGS) -o power power.o

power.o: power.c
	$(CC) $(CFLAGS) -c power.c

clean:
	rm -f *.o power
