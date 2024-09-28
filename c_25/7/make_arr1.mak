# Makefile for array input

# Variables
CC = gcc
CFLAGS = -Wall -pg
SOURCE = sum_array.c
TARGET = sum_array
OFILE = sum_array.o
PROF_OUTPUT = gmon.out
PROFILE_REPORT = analysis1.txt

all: $(TARGET) run profile


$(TARGET): $(OFILE)
	$(CC) $(CFLAGS) -o $(TARGET) $(OFILE)


$(OFILE): $(SOURCE)
	$(CC) $(CFLAGS) -c $(SOURCE)

run: $(TARGET)
	./$(TARGET)

profile: $(PROF_OUTPUT)
	gprof $(TARGET) $(PROF_OUTPUT) > $(PROFILE_REPORT)
	@echo "Profile report $(PROFILE_REPORT) generated"
	@cat $(PROFILE_REPORT)

# Clean up generated files
.PHONY: clean
clean:
	rm -f *.o $(TARGET) $(PROF_OUTPUT) $(PROFILE_REPORT)
