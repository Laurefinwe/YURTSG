#ifndef TILE_H
#define TILE_H

#include <SDL/SDL.h>
#include <SDL/SDL_image.h>

struct Tile_Struct {
  int x;
  int y;
  int type;
} *tiles;

typedef struct Tile_Struct tile;

SDL_Surface *Tile_Choose(int type);

#endif
