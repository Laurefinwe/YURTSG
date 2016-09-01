#ifndef MAP_H
#define MAP_H

#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "tile.h"
#include "main.h"

extern SDL_Surface *screen;
extern tile *tiles;

void Map_Draw(int x, int y);
void Map_Load(char *map_name);

int tile_count, tile_cols, tile_rows, tile_height, tile_width;

#endif
