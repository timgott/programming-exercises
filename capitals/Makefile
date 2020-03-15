TEST_DIR=tests
TESTS=$(patsubst %.c,%,$(wildcard $(TEST_DIR)/*.c))
OUTPUT_FILE=capitals
SHARED_OBJ_FILES=src/game.o src/capitalsdata.o
TEST_OBJ_FILES=$(SHARED_OBJ_FILES)
OBJ_FILES=src/main.o $(SHARED_OBJ_FILES)

$(OUTPUT_FILE): $(OBJ_FILES)
	$(CC) $(CFLAGS) $(OBJ_FILES) -o $(OUTPUT_FILE)

.PHONY: clean tests

clean:
	rm src/*.o
	rm $(TESTS)
	rm capitals

$(TEST_DIR)/%: $(TEST_OBJ_FILES) $(TEST_DIR)/%.o
	$(CC) $(CFLAGS) $+ -o $@

RED_COLOR='\033[0;31m'
GREEN_COLOR='\033[0;32m'
NO_COLOR='\033[0m'

tests: $(TESTS)
	@for test in $(TESTS); do \
		echo Running $$test... && $$test && echo $(GREEN_COLOR)Test successful!$(NO_COLOR) || echo $(RED_COLOR)Test failed!$(NO_COLOR) ; echo ; \
	done