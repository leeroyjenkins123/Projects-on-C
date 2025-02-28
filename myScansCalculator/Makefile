CC = gcc
CFLAGS = -Wall -fPIC -I../include
SRC_DIR = .
OBJ_DIR = ../obj
LIB_DIR = ../lib
SOURCES=$(shell find ./* -name '*.c')
OBJECTS=$(SOURCES:./%.c=$(OBJ_DIR)/%.o)
TARGET = $(LIB_DIR)/libmyScansCalculator.so

all: $(TARGET)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@


$(TARGET): $(OBJECTS)
	$(CC) -shared -o $@ $^