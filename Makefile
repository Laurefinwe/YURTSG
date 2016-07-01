CC = gcc

CFLAGS = -c -std=gnu11
LDFLAGS = -lSDL -lSDL_image
SOURCES = main.c loop.c init.c finit.c map.c tile.c
OBJECTS = $(SOURCES:.c=.o)
EXECUTABLE = exec

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.c.o:
	$(CC) $(CFLAGS) $< -o $@
