#ifndef LOOP_H
#define LOOP_H

#include <stdbool.h>
#include <SDL/SDL.h>
#include "map.h"
#include "misc.h"
#include "build.h"

extern SDL_Surface *screen;
void Map_Draw(int x, int y);
building *Build_Init(char *path);
void Build_Set(SDL_Event *e, SDL_Surface *screen, building *building);

SDL_Event e;

extern int tile_width, tile_height;
extern point *mouse_pos;
point map_iterator;

void Loop_Main();

#endif
