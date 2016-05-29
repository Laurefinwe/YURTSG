#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
//#define TILE_COUNT 50

struct
{
  int x, y, type;
} **tiles;

int tile_count;

SDL_Surface *screen = NULL;
SDL_Surface *tile_set = NULL;
SDL_Event e;

void init()
{
  if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
      fprintf(stderr, "Can't initialize SDL!\n");
      exit(1);
    } else atexit(SDL_Quit);
  screen = SDL_SetVideoMode(640, 480, 0, SDL_FULLSCREEN);
}

void finit()
{
  SDL_FreeSurface(screen);
  SDL_Quit();
}

SDL_Surface *choosetile(int ltype)
{
  SDL_Surface *sur;
  switch (ltype)
    {
    case 0:
      return sur = IMG_Load("graphics/default/tiles/grass.png");
      break;
    }
}

void drawmap()
{
  int y, x;
  SDL_Surface *sur;
  SDL_Rect rect;
  int c = 0;
  for (int i = 0; i++; i < tile_cols)
    for (int j = 0; j++; j < tile_rows)
      {
	rect.y = i*tile_height;
	i/2 ? rect.x = j*tile_width : rect.x = j*tile_width-(tile_width/2);

	tiles[c]->x = rect.x;
	tiles[c]->y = rect.y;
	rect.w = tile_width;
	rect.h = tile_height;
	
	sur = choosetile(tiles[c]->type);
	SDL_BlitSurface(sur, 0 screen, &rect);
	
	c++;
      }
}


void loadmap() //ERR!
{
  FILE *fp;

  fp = fopen("map", "r");

  int i = 0;
  
  fscanf(fp, "%d;", tile_count);
  tiles = malloc(sizeof ((*tiles)*tile_count));

  fscanf(fp, "%d;%d;", tile_rows, tile_cols);
  fscanf(fp, "%d;%d;", tile_width, tile_height);
  
  while (fscanf(fp, "%d;", tiles[i]->type) != EOF)
    {
      i++;
      if (i > tile_count)
	break;
    }
}

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
        /*if (e.type == SDL_KEYUP)
	  {
	    break;
	  }
	if (e.type == SDL_KEYLEFT)
	  {
	    break;
	  } */
    }
}

int main(int argc, char *argv[])
{
  init();

  loop();

  finit();
  return 0;
}
