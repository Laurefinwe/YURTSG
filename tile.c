#include "tile.h"

SDL_Surface *choosetile(int ltype)
{
  SDL_Surface *sur;
  

  switch (ltype)
    {
    case 0:
      return sur = IMG_Load("graphics/tiles/grass.bmp");
      SDL_SetColorKey(sur, SDL_TRUE, SDL_MapRGB(sur->format, 255, 0, 255));
      break;
    case 1:
      return sur = IMG_Load("graphics/tiles/desert.bmp");
      SDL_SetColorKey(sur, SDL_TRUE, SDL_MapRGB(sur->format, 255, 0, 255));
      break;
    }
  }
