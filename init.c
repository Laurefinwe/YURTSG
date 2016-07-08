#include "init.h"

void loadResolution(struct point *resolution)
{
  FILE *fp;
  const char *path = "/etc/YURTSG/config";

  if ((fp = fopen(path, "rw")) != NULL)
    {
      fscanf(fp, "resolution: %dx%d\n", &(resolution->x), &(resolution->y));
      fclose(fp);
    } else
    {
      if ((fp = fopen(path, "w+")) != NULL)
	{
	  system("mkdir /etc/YURTSG");
	  resolution->x = resolution->y = 0;
	  chooseResolution(resolution);
	  fprintf(fp, "resolution: %dx%d\n", resolution->x, resolution->y);
	} else printf("Error while trying to read/write to %s. Try again as root/admin\n", path);
    }
}


void init(char *map_name)
{
  struct point *resolution = malloc(sizeof (struct point *));
  
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

  loadResolution(resolution);
  
  screen = SDL_SetVideoMode(resolution->x, resolution->y, 0, SDL_FULLSCREEN | SDL_DOUBLEBUF);
  //atexit(SDL_FreeSurfacescreen);
  
  loadmap(map_name);
  drawmap(0, 0);
}
