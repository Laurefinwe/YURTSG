#ifndef LOOP_H
#define LOOP_H

#include <SDL/SDL.h>
#include "map.h"
#include "main.h"

extern SDL_Surface *screen;
void Map_Draw(int x, int y);

SDL_Event e;

extern struct point *mouse_pos;
struct point map_iterator;

void loop();

#endif
