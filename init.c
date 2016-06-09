#include "init.h"

void init()
{
  if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
      fprintf(stderr, "Can't initialize SDL!\n");
      exit(1);
    } else atexit(SDL_Quit);
  //screen = SDL_SetVideoMode(640, 480, 0, SDL_FULLSCREEN);
  screen = SDL_SetVideoMode(960, 720, 0, SDL_ANYFORMAT);
  loadmap();
  drawmap();
}
