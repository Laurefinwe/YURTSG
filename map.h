#ifndef MAP_H
#define MAP_H

#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "tile.h"
#include "main.h"

extern struct tile *tiles;

void drawmap();
void loadmap();

int tile_count, tile_cols, tile_rows, tile_height, tile_width;

#endif
