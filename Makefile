OBJ_DIR = obj
BIN_DIR = bin
LIB_DIR = lib

all: libs app

libs:
	@mkdir -p $(OBJ_DIR) $(BIN_DIR) $(LIB_DIR)
	$(MAKE) -C myCalculator
	$(MAKE) -C myPrintCalculator
	$(MAKE) -C myScansCalculator

app:
	$(MAKE) -C src

clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR) $(LIB_DIR)

run:
	LD_LIBRARY_PATH=$(LIB_DIR):$$LD_LIBRARY_PATH ./bin/SimpleCalculator

.PHONY: all run clean