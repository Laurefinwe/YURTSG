#include "build.h"

void Build_Set(SDL_Event *e, SDL_Surface *screen, SDL_Surface *sur)
{
  SDL_Rect rect;
  rect.x = e->motion.x = e->motion.x;
  rect.y = e->motion.y = e->motion.y;
  rect.w = sur->w;
  rect.h = sur->h;
  
  SDL_BlitSurface(sur, NULL, screen, &rect);
}

void Build_Build(SDL_Event *e, building *building, SDL_Surface *sur)
{    
  building->house->x = e->motion.x;
  building->house->y = e->motion.y;
  building->house->w = sur->w;
  building->house->h = sur->h;
}
