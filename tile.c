#include "tile.h"

SDL_Surface *choosetile(int type)
{
  SDL_Surface *sur;
  

  switch (type)
    {
    case 0:
      return sur = IMG_Load("graphics/tiles/grass.png");
      break;
      
    case 1:
      return sur = IMG_Load("graphics/tiles/desert.png");
      break;

    case 2:
      return sur = IMG_Load("graphics/tiles/water.png");
      break;
    }

  SDL_FreeSurface(sur);
}
