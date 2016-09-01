#ifndef MENU_H
#define MENU_H

#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "misc.h"

extern SDL_Surface *screen;
void Menu_Resolution(point *resolution);
SDL_Surface *Menu_ChooseBackground(point *resolution);

#endif
