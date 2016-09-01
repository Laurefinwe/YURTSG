#include "init.h"

void Init_LoadResolution(point *resolution)
{
  FILE *fp;
  const char *path = "config/config";

  if ((fp = fopen(path, "rw")) != NULL)
    {
      fscanf(fp, "resolution: %dx%d\n", &(resolution->x), &(resolution->y));
      fclose(fp);
    } else
    {
      if ((fp = fopen(path, "w+")) != NULL)
	{
	  resolution->x = resolution->y = 0;
	  Menu_Resolution(resolution);
	  fprintf(fp, "resolution: %dx%d\n", resolution->x, resolution->y);
	  fclose(fp);
	} else printf("Error while trying to read/write to %s\n", path);
    }
}


void Init_Main(char *map_name)
{
  point *resolution = malloc(sizeof (point));
  
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

  screen = SDL_SetVideoMode(640, 480, 0, SDL_ANYFORMAT | SDL_DOUBLEBUF);

  Init_LoadResolution(resolution);
  
  screen = SDL_SetVideoMode(resolution->x, resolution->y, 0, SDL_FULLSCREEN | SDL_DOUBLEBUF);
  //atexit(SDL_FreeSurfacescreen);
  
  Map_Load(map_name);
  Map_Draw(0, 0);
}
