# Makefile for GO-1

# Variables
PROJ_NAME=c-1
SRC=$(PROJ_NAME).go
DIR=compiled
BIN=$(DIR)/$(PROJ_NAME).bin
OBJ=$(DIR)/$(PROJ_NAME).o
ASM=$(DIR)/$(PROJ_NAME).s
STR=$(DIR)/$(PROJ_NAME).stripped

# Creates the $(DIR) directory if it doesn't exist
$(shell rm -rf $(DIR))
$(shell mkdir -p $(DIR))

# Rule to build the final binary from Go source
$(BIN): $(SRC)
	###### Build Go binary with debug info
	go build -o $(BIN) $(SRC)
	#

# Rule to generate a stripped binary from the final binary
$(STR): $(BIN)
	###### Stripped binary
	strip -o $(STR) $(BIN)
	#

# Rule to generate assembly output from the Go source
$(ASM): $(SRC)
	###### Compile Go source to assembly file
	go build -gcflags="-S" -o /dev/null $(SRC) 2> $(ASM)
	#

# Rule to generate object file from Go source
# $(OBJ): $(SRC)
# 	###### Compile Go source to object file
# 	go tool compile -o $(OBJ) -I "$(shell go env GOROOT)/pkg/$(shell go env GOOS)_$(shell go env GOARCH)" $(SRC)
# 	#

# Default target: build both the binary and the assembly output
# all: $(BIN) $(ASM) $(STR) $(OBJ)
all: $(BIN) $(ASM) $(STR)

# Clean up all $(DIR) files
clean:
	# Remove all files in the $(DIR) directory
	rm -rf $(DIR)/
