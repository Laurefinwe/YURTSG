#ifndef BUILD_H
#define BUILD_H

#include <SDL/SDL.h>
#include <SDL/SDL_image.h>

struct building_house
{
  Uint8 type;
  Uint16 x, y;
  Uint16 w, h;
  SDL_Surface *sur;
  Uint8 population, max_population;
};

union building
{
  Uint8 type;
  struct building_house *house;
};

typedef union building building;

void Build_Init(building *building, char *path);
void Build_Set(SDL_Event *e, SDL_Surface *screen, building *building);
void Build_Build(SDL_Event *e, building *building);

#endif
