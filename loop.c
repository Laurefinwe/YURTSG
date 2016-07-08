#include "loop.h"

void loop()
{
  mouse_pos = malloc(sizeof (struct point));
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
		  drawmap(map_iterator.x, map_iterator.y += 25);
		  break;
		case SDLK_DOWN:
		  drawmap(map_iterator.x, map_iterator.y -= 25);
		  break;
		case SDLK_RIGHT:
		  drawmap(map_iterator.x -= 25, map_iterator.y);
		  break;
		case SDLK_LEFT:
		  drawmap(map_iterator.x += 25, map_iterator.y);
		  break;
		case SDLK_ESCAPE:
		  exit(1);
		}
	      
	    case SDL_MOUSEMOTION:
	      if (mouse_pos != NULL)
		findMousexy(mouse_pos, e);
	      break;

	      //case SDL_MOUSEBUTTONDOWN:
	      
	    }
	}
    }
}
