CC = gcc
CFLAGS = -Iinclude -Iunity/src -fprofile-arcs -ftest-coverage -O0

SRC ?= src/cal.c
TEST ?= tests/unit/test_cal.c
UNITY_SRC = unity/unity.c

TARGET ?= test_runner
REPORT ?= coverage.html

all: coverage

test: $(SRC) $(TEST) $(UNITY_SRC)
	$(CC) $(CFLAGS) $(SRC) $(TEST) $(UNITY_SRC) -o $(TARGET)
	./$(TARGET)

coverage: test
	python -m gcovr -r . --filter "$(SRC)" --html-details -o $(REPORT)

clean:
	rm -f $(TARGET) *.gcda *.gcno *.gcov $(REPORT)