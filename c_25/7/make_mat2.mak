CC = gcc
CFLAGS = -Wall -pg
TARGET =matrix_mult
SRC=matrix_mult.c
OFILE=matrix_mult.o
PROF_OUTPUT=gmon.out
#-pg for profiling

all: $(TARGET) run profile

$(TARGET): $(OFILE)
	$(CC) $(CFLAGS) -o $(TARGET) $(OFILE)

$(OFILE): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

run: $(TARGET)
	./$(TARGET)
#gmon.out is a profiling data file generated by the GNU Profiler (gprof). It contains information about the execution profile of a program,
# such as the number of times each function is called and the amount of time spent in each function.
profile:$(PROF_OUTPUT)
	gprof $(TARGET) $(PROF_OUTPUT) >analyse.txt
	@echo File created as analyse.txt successfully 
	@cat analyse.txt
.PHONY: clean

clean:
	rm -f *.o *.exe analyse.txt $(PROF_OUTPUT)

