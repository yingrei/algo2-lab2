CFLAGS = -g -Wall -Wextra -pedantic -std=c99
TARGET = sort
CC = gcc
$(TARGET): clear sort.o main.o array_helpers.o 
	$(CC) $(EFLAGS) -o $(TARGET) main.o sort.o array_helpers.o

clear:
	rm -f *.o $(TARGET)
