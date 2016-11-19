#include "build.h"

building *Build_Init(char *path)
{
  building *building;
  building = malloc(sizeof (union building));
  building->house = malloc(sizeof (struct building_house));
  building->house->sur = IMG_Load(path);
  building->house->set = false;
  return building;
}

void Build_Set(SDL_Event *e, SDL_Surface *screen, building *building)
{
  SDL_Rect rect;
  SDL_BlitSurface(NULL, 0, screen, 0);

  Misc_ConvertPosition(e, e->motion.x - (building->house->sur->w/2), e->motion.y - (building->house->sur->h/2), &(rect.x), &(rect.y), tile_width, tile_height );
  
  //rect.x = e->motion.x - (building->house->sur->w/2);
  //rect.y = e->motion.y - (building->house->sur->h/2);
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
  building->house->set = true;
}
