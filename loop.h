#ifndef LOOP_H
#define LOOP_H

#include <SDL/SDL.h>
#include "point.h"
#include "map.h"

extern SDL_Surface *screen;
extern void drawmap(int x, int y);

SDL_Event e;

struct point map_iterator;

void loop();

#endif
