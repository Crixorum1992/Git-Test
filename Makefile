#Name: Nicholas Reid
#Date: 04-05-2017
#Program:Makefile

CC=g++
TARGET=main
CFLAGS=-c -Wall

$(TARGET): main.o
	$(CC) main.o -o $(TARGET)

all: $(TARGET)

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

clean:
	rm *.o $(TARGET)
