#include "tile.h"

SDL_Surface *choosetile(int type)
{
  SDL_Surface *sur = NULL;
  

  switch (type)
    {
    case 0:
      sur = IMG_Load("graphics/tiles/grass.png");
      break;
      
    case 1:
      sur = IMG_Load("graphics/tiles/desert.png");
      break;

    case 2:
      sur = IMG_Load("graphics/tiles/water.png");
      break;
    }

  return sur;
}
