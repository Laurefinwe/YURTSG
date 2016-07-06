#include "finit.h"

void finit()
{
  free(tiles);
  free(mouse_pos);
  SDL_FreeSurface(screen);
  SDL_Quit();
}
