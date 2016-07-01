#include "init.h"

void init(char *map_name)
{
  if (map_name == NULL)
    exit(1);
  
  if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
      fprintf(stderr, "Can't initialize SDL!\n");
      exit(1);
    } else atexit(SDL_Quit);

  /*
  if (hw_support)
    {
      flags |= SDL_HWSURFACE;
    } else flags |= SDL_SWSURFACE;

  if (fullscreen)
    flags |= SDL_FULLSCREEN; */
  
  screen = SDL_SetVideoMode(960, 720, 0, SDL_FULLSCREEN | SDL_DOUBLEBUF | SDL_HWSURFACE);
  //screen = SDL_SetVideoMode(960, 720, 0, SDL_ANYFORMAT);
  //atexit(SDL_FreeSurfacescreen);
  
  loadmap(map_name);
  drawmap(0, 0);
}
