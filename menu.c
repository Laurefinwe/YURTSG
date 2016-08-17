#include "menu.h"

SDL_Surface *chooseMenuImage(struct point *resolution)
{
  SDL_Surface *sur;
  switch (resolution->x)
    {
      /*case 1920:
      sur = Img_Load("graphics/menu/1920");
      break*/

    case 1440:
      sur = IMG_Load("graphics/menu/1440x1080.png");
      break;
      
      /*case 1366
      sur = Img_Load("graphics/menu/1366.png");
      break;*/
      
    case 1280:
      sur = IMG_Load("graphics/menu/1280x800.png");
      break;
      
    case 1024:
      sur = IMG_Load("graphics/menu/1024x768.png");
      break;
      
    case 640:
      sur = IMG_Load("graphics/menu/640x480.png");
      break;
    }
  return sur;
      
}

void chooseResolution(struct point *resolution)
{
  int quit = 0;
  SDL_Rect r0, rect[4];
  SDL_Surface *sur[4] = {NULL, NULL, NULL, NULL};
  SDL_Event e;
  
  r0.x = r0.y = 0;
  r0.w = rect[0].w = rect[1].w = rect[2].w = rect[3].w = 100;
  r0.h = rect[0].h = rect[1].h = rect[2].h = rect[3].h = 33;
  rect[0].y = rect[1].y = rect[2].y = rect[3].y = 10;
  
  sur[0] = IMG_Load("graphics/menu/resolution_button1440x1080.png");
  sur[1] = IMG_Load("graphics/menu/resolution_button1280x800.png");
  sur[2] = IMG_Load("graphics/menu/resolution_button1024x768.png");
  sur[3] = IMG_Load("graphics/menu/resolution_button640x480.png");

  for (int i = 0; i < 4; i++)
    {
      rect[i].x = rect[0].y + i * 110;
      SDL_BlitSurface(sur[i], &r0, screen, &rect[i]);
      SDL_Flip(screen);
    }

  while (quit == 0)
    {
      if (SDL_PollEvent(&e) == 0)
	{
	  SDL_Flip(screen);
	} else
	{
	  switch (e.type)
	    {
	    case SDL_MOUSEMOTION:
	      SDL_Flip(screen);
	      break;
	      
	    case SDL_MOUSEBUTTONDOWN:
	      if (e.button.y > rect[0].y && e.button.y < rect[0].y + rect[0].h)
		{
		  if (e.button.x > rect[0].x && e.button.x < rect[0].x + rect[0].w)
		    {
		      resolution->x = 1440;
		      resolution->y = 1080;
		      quit = 1;
		    }

		  if (e.button.x > rect[1].x && e.button.x < rect[1].x + rect[1].w)
		    {
		      resolution->x = 1280;
		      resolution->y = 800;
		      quit = 2;
		    }

		  if (e.button.x > rect[2].x && e.button.x < rect[2].x + rect[2].w)
		    {
		      resolution->x = 1024;
		      resolution->y = 768;
		      quit = 3;
		    }

		  if (e.button.x > rect[3].x && e.button.x < rect[3].x + rect[3].w)
		    {
		      resolution->x = 640;
		      resolution->y = 480;
		      quit = 4;
		    }
		}
	      break;

	    case SDL_QUIT:
	      exit(1);
	      break;
	    }
	}
    }
}

/*void drawMenu(struct point *resolution)
{
  SDL_Surface *sur;
  
  sur = chooseMenuImage(resolution);

  chooseMenu(2);
  }*/

/*void chooseMenu(int menu)
{
    switch (menu)
    {
    case 0:
      settingsMenu();
      break;
    case 1:
      resolutionMenu();
      break;
    case 2:
      mainMenu();
      break;
    }
    }*/
