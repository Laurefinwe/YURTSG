#include "finit.h"

void Finit_Main()
{
  free(tiles);
  SDL_FreeSurface(screen);
  SDL_Quit();
}
