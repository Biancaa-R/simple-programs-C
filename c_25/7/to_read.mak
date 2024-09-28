# Makefile to read a text file

# Variables
FILE = analysis.txt

# Default target
all: read_cat read_while read_awk read_sed

# Target to read file using 'cat'
read_cat:
	@echo "Reading file using cat:"
	@cat $(FILE)
	@echo "------------------------------"

# Target to read file using 'while' loop
read_while:
	@echo "Reading file using while loop:"
	@while IFS= read -r line; do echo $$line; done < $(FILE)
	@echo

# Target to read file using 'awk'
read_awk:
	@echo "Reading file using awk:"
	@awk '{print}' $(FILE)
	@echo

# Target to read file using 'sed'
read_sed:
	@echo "Reading file using sed:"
	@sed '' $(FILE)
	@echo

# Clean target to remove any generated files (if any)
clean:
	@echo "No files to clean"
