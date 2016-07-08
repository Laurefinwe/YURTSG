CC = gcc

CFLAGS = -c -g -std=gnu11 -Wall
LDFLAGS = -lSDL -lSDL_image
HEADERS = main.h loop.h point.h init.h finit.h tile.h mouse.h map.h menu.c
SOURCES = main.c loop.c init.c finit.c map.c tile.c mouse.c menu.c
OBJECTS = $(SOURCES:.c=.o)
EXECUTABLE = exec

all: $(SOURCES) $(HEADERS) $(EXECUTABLE)

install:
	mkdir ~/.YURTSG

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.c.o:
	$(CC) $(CFLAGS) $< -o $@

clear:
	rm *.o
