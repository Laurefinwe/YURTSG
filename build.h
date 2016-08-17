#ifndef BUILD_H
#define BUILD_H

#include <SDL/SDL.h>

struct building_house
{
  Uint8 type;
  Uint16 x, y;
  Uint16 w, h;
  Uint8 population, max_population;
};

union building
{
  Uint8 type;
  struct building_house *house;
};

typedef union building building;

void Build_Set(SDL_Event *e, SDL_Surface *screen, SDL_Surface *sur);
void Build_Build(SDL_Event *e, building *building, SDL_Surface *sur);

#endif
