#ifndef TILE_H
#define TILE_H

#include <SDL/SDL.h>
#include <SDL/SDL_image.h>

struct tile {
  int x;
  int y;
  int type;
};

SDL_Surface *choosetile(int ltype);

#endif
