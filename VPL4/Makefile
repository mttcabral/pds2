CC=g++
CFLAGS=-std=c++11 -Wall -I$(INCLUDE_DIR)
BUILD_DIR=build
SRC_DIR=src
INCLUDE_DIR=include

all: vpl_execution

vpl_execution: $(BUILD_DIR)/main.o $(BUILD_DIR)/list.o
	$(CC) $(CFLAGS) $(BUILD_DIR)/main.o $(BUILD_DIR)/list.o -o vpl_execution

$(BUILD_DIR)/main.o: $(SRC_DIR)/main.cpp $(INCLUDE_DIR)/list.hpp
	$(CC) $(CFLAGS) -c $(SRC_DIR)/main.cpp -o $(BUILD_DIR)/main.o

$(BUILD_DIR)/list.o: $(SRC_DIR)/list.cpp $(INCLUDE_DIR)/list.hpp $(INCLUDE_DIR)/node.hpp
	$(CC) $(CFLAGS) -c $(SRC_DIR)/list.cpp -o $(BUILD_DIR)/list.o

clean:
	rm -rf $(BUILD_DIR)/*.o vpl_execution