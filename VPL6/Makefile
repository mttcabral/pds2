CC = g++
CFLAGS = -std=c++11 -Wall -I$(INCLUDE_DIR)
INCLUDE_DIR = include
SRC_DIR = src
BUILD_DIR = build

all: main

main: $(BUILD_DIR)/main.o $(BUILD_DIR)/student.o
	$(CC) $(CFLAGS) $(BUILD_DIR)/main.o $(BUILD_DIR)/student.o -o main

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(BUILD_DIR)/main.o: $(SRC_DIR)/main.cpp $(INCLUDE_DIR)/student.hpp | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $(SRC_DIR)/main.cpp -o $(BUILD_DIR)/main.o

$(BUILD_DIR)/student.o: $(SRC_DIR)/student.cpp $(INCLUDE_DIR)/student.hpp | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $(SRC_DIR)/student.cpp -o $(BUILD_DIR)/student.o

clean:
	rm -rf $(BUILD_DIR)/*.o main