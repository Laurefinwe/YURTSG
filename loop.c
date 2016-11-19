#include "loop.h"

void Loop_Main()
{
  building *building;
  bool build = false;
  
  map_iterator.x = map_iterator.y = 0;
  building = Build_Init("graphics/buildings/roman_house.png");

  //Build_Init(building, "graphics/buildings/roman_house.png");
  //  SDL_BlitSurface(building->house->sur, 0, screen, 0);
  for (;;)
    {
      if (SDL_PollEvent(&e) == 0)
	{
	  SDL_BlitSurface(NULL, 0, screen, 0);
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
		  Map_Draw(map_iterator.x, map_iterator.y += 25);
		  break;
		case SDLK_DOWN:
		  Map_Draw(map_iterator.x, map_iterator.y -= 25);
		  break;
		case SDLK_RIGHT:
		  Map_Draw(map_iterator.x -= 25, map_iterator.y);
		  break;
		case SDLK_LEFT:
		  Map_Draw(map_iterator.x += 25, map_iterator.y);
		  break;
		case SDLK_ESCAPE:
		  exit(1);

		case SDLK_b:
		  build = true;
		  break;
		}
	      
	    case SDL_MOUSEMOTION:
	      if (build == true)
		{
		  Build_Set(&e, screen, building);
		}

	      /*    case SDL_MOUSEBUTTONDOWN:
	      if (build == true)
		{
		  Build_Build(&e, building);
		  build = false;
		}
	      */
	    }
	}
    }
}
