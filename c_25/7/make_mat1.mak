# Define variables
CC = gcc
CFLAGS = -Wall -pg -o
TARGET = matrix_mult
SRC = matrix_mult.c
PROF_OUTPUT = gmon.out
PROFILE_REPORT = profile_report.txt

# Default target: compile, run, and profile
all: $(TARGET) run profile

# Compile the program with profiling enabled
$(TARGET): $(SRC)
	$(CC) $(SRC) $(CFLAGS) $(TARGET)

# Run the compiled program to generate the profiling data
run: $(TARGET)
	./$(TARGET)

# Generate the profiling report using gprof
profile: $(PROF_OUTPUT)
	gprof $(TARGET) $(PROF_OUTPUT) > $(PROFILE_REPORT)
	@echo "Profile report generated in $(PROFILE_REPORT)"

# Clean up generated files
clean:
	rm -f $(TARGET) $(PROF_OUTPUT) $(PROFILE_REPORT)

# Clean and then rebuild
rebuild: clean all
