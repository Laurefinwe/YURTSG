#ifndef MAIN_H
#define MAIN_H

#include "tile.h"
#include "init.h"
#include "loop.h"
#include "finit.h"

struct point {
  int x, y;
};

struct tile *tiles;
SDL_Surface *screen;

#endif
