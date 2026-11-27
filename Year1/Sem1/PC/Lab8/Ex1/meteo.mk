CFLAGS = -std=c23 -Wall -Wextra -Wpedantic -g
CLIB = -lm
CSRC = $(wildcard *.c)
COBJ = $(CSRC:.c=.o)
TARGET = main

$(TARGET): $(COBJ)
	clang $(CFLAGS) -o $@ $(COBJ) $(CLIB)

%.o: %.c
	clang $(CFLAGS) -c $< 

.PHONY: clean
clean: 
	rm -f $(COBJ)
	rm -f $(TARGET)
