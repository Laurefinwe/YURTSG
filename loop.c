#include "loop.h"

void loop()
{
  for (;;)
    {
      if (SDL_PollEvent(&e) == 0)
	{
	  SDL_Flip(screen);
	} else {
	if (e.type == SDL_KEYDOWN)
	  {
	    break;
	  }
      }
    }
}
