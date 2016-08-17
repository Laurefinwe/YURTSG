#ifndef INIT_H
#define INIT_H

#include <SDL/SDL.h>
#include "main.h"

extern void chooseResolution(struct point *resolution);
extern void Map_Load(char *map_name);
extern void Map_Draw();
extern SDL_Surface *screen;

void init(char *map_name);

#endif
