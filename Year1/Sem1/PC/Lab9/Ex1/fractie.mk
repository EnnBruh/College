CC = clang
CFLAGS = -std=c23 -Wall -Wextra -Wpedantic -g
TARGET = fractii
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
LIB = -lm

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ) $(LIB)

%.o: %.c
	$(CC) $(CFLAGS) -c $<

.PHONY: clean
clean: 
	rm -f $(TARGET) $(OBJ)
