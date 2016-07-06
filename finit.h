#ifndef FINIT_H
#define FINIT_H

#include <SDL/SDL.h>
#include "tile.h"
#include "main.h"

extern struct point *mouse_pos;
extern struct tile *tiles;
extern SDL_Surface *screen;

void finit();

#endif
