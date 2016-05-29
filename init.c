void init()
{
  if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
      fprintf(stderr, "Can't initialize SDL!\n");
      exit(1);
    } else atexit(SDL_Quit);
  screen = SDL_SetVideoMode(640, 480, 0, SDL_FULLSCREEN);
}
