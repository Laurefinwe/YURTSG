#include "build.h"

void Build_Init(building *building, char *path)
{
  building = malloc(sizeof (union building));
  building->house = malloc(sizeof (struct building_house));
  building->house->sur = IMG_Load(path);
}

void Build_Set(SDL_Event *e, SDL_Surface *screen, building *building)
{
  SDL_Rect rect;
  rect.x = e->motion.x = e->motion.x;
  rect.y = e->motion.y = e->motion.y;
  rect.w = building->house->sur->w;
  rect.h = building->house->sur->h;
  
  SDL_BlitSurface(building->house->sur, NULL, screen, &rect);
}

void Build_Build(SDL_Event *e, building *building)
{    
  building->house->x = e->motion.x;
  building->house->y = e->motion.y;
  building->house->w = building->house->sur->w;
  building->house->h = building->house->sur->h;
}
