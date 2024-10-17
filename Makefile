CC = gcc
CFLAGS = -Wall -g -I./include
TARGET = main
OBJS = vector3D.o main.o

RM = rm -f

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)

vector3D.o: src/vector3D.c include/vector3D.h
	$(CC) $(CFLAGS) -c src/vector3D.c

main.o: src/main.c
	$(CC) $(CFLAGS) -c src/main.c

clean:
	$(RM) $(OBJS) $(TARGET)
