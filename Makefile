CC = gcc

CFLAGS = -c -std=gnu11
LFLAGS = -lSDL -lSDL_image

all: exec

exec: main.o init.o finit.o loop.o map.o tile.o
	$(CC) $(LFLAGS) main.o init.o finit.o loop.o map.o tile.o -o exec

main.o: main.c
	$(CC) $(CFLAGS) main.c

init.o: init.c
	$(CC) $(CFLAGS) init.c

finit.o: finit.c
	$(CC) $(CFLAGS) finit.c

tile.o: tile.c
	$(CC) $(CFLAGS) tile.c

map.o: map.c
	$(CC) $(CFLAGS) map.c

loop.o: loop.c
	$(CC) $(CFLAGS) loop.c

clean:
	rm *.o exec
