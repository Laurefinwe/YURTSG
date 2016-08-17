#include "finit.h"

void finit()
{
  free(tiles);
  SDL_FreeSurface(screen);
  SDL_Quit();
}
