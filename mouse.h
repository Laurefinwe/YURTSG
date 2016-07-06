#ifndef MOUSE_H
#define MOUSE_H

#include <SDL/SDL.h>
#include "point.h"

void findMousexy(struct point *mosue_pos, SDL_Event e);

#endif
