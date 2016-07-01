#include "loop.h"

void loop()
{
  map_iterator.x = map_iterator.y = 0;
  for (;;)
    {
      if (SDL_PollEvent(&e) == 0)
	{
      	  SDL_Flip(screen);
	} else
	{
	  switch (e.type)
	    {
	    case SDL_QUIT:
	      exit(1);
	      break;

	    case SDL_KEYDOWN:
	      switch (e.key.keysym.sym)
		{
		case SDLK_UP:
		  drawmap(map_iterator.x, map_iterator.y = -25 + map_iterator.y);
		  break;
		case SDLK_DOWN:
		  drawmap(map_iterator.x, map_iterator.y = 25 + map_iterator.y);
		  break;
		case SDLK_RIGHT:
		  drawmap(map_iterator.x = 25 + map_iterator.x, map_iterator.y);
		  break;
		case SDLK_LEFT:
		  drawmap(map_iterator.x = -25 + map_iterator.x, map_iterator.y);
		  break;
		case SDLK_ESCAPE:
		  exit(1);
		}
	    }
	}
    }
}
