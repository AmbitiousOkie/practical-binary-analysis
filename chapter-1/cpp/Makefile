# Makefile for CPP-1

# Variables
PROJ_NAME=cpp-1
SRC=$(PROJ_NAME).cpp
DIR=compiled
OBJ=$(DIR)/$(PROJ_NAME).o
BIN=$(DIR)/$(PROJ_NAME).bin
ASM=$(DIR)/$(PROJ_NAME).s
STR=$(DIR)/$(PROJ_NAME).stripped

# Creates the $(DIR) directory if it doesn't exist
$(shell rm -rf $(DIR))
$(shell mkdir -p $(DIR))

# Compiler to use
CC=g++

# Compiler flags: 
# -Wall enables all warnings
# -Wextra enables extra warnings
# -g includes debug information
FLAGS=-Wall -Wextra -g

# Rule to build the object file from the C++ source
$(OBJ): $(SRC)
	###### Object File
	$(CC) $(FLAGS) -c $(SRC) -o $(OBJ)
	#

# Rule to build the final binary from the object file
$(BIN): $(OBJ)
	###### Link object file to create executable
	$(CC) $(FLAGS) $(OBJ) -o $(BIN)
	#

# Rule to generate a stripped binary from the final binary
$(DIR)/$(STR): $(BIN)
	###### Stripped binary
	strip -o $(STR) $(BIN)
	#

# Rule to generate assembly output from the C++ source
$(ASM): $(SRC)
	######  Compile C++ source to assembly file
	$(CC) $(FLAGS) -S $(SRC) -o $(ASM)
	#

# Default target: build both the binary and the assembly output
all: $(BIN) $(ASM) $(DIR)/$(STR)

# Clean up all $(DIR) files
clean:
	# Remove all files in the $(DIR) directory
	rm -rf $(DIR)/
