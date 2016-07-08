#ifndef INIT_H
#define INIT_H

#include <SDL/SDL.h>
#include "point.h"

extern void chooseResolution(struct point *resolution);
extern void loadmap(char *map_name);
extern void drawmap();
extern SDL_Surface *screen;

void init(char *map_name);

#endif
