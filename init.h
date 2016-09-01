#ifndef INIT_H
#define INIT_H

#include <stdio.h>
#include <SDL/SDL.h>
#include "main.h"
#include "misc.h"

extern void Menu_Resolution(point *resolution);
extern void Map_Load(char *map_name);
extern void Map_Draw();
extern SDL_Surface *screen;

void Init_Main(char *map_name);
void Init_LoadResolution(point *resolution);

#endif
