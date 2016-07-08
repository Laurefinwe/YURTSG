#ifndef MENU_H
#define MENU_H

#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "point.h"

extern SDL_Surface *screen;
void chooseResolution(struct point *resolution);
SDL_Surface *chooseMenuImage(struct point *resolution);

#endif
