CC = gcc
CFLAGS = -Wall -Wextra -I../include
LIBS = -L../lib -lmyCalculator -lmyPrintCalculator -lmyScansCalculator -lm
SRC_DIR = .
OBJ_DIR = ../obj
BIN_DIR = ../bin
SOURCES = $(shell find $(SRC_DIR) -name '*.c')
OBJECTS = $(SOURCES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
TARGET = $(BIN_DIR)/SimpleCalculator

all: $(TARGET)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR) $(BIN_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(TARGET): $(OBJECTS)
	$(CC) $^ -o $@ $(LIBS)

$(OBJ_DIR) $(BIN_DIR):
	mkdir -p $@

.PHONY: all