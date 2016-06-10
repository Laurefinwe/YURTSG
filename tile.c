#include "tile.h"

SDL_Surface *choosetile(int ltype)
{
  SDL_Surface *sur;
  

  switch (ltype)
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
  }
