#include "map.h"

void Map_Draw(int x, int y)
{
  SDL_Surface *sur = NULL;
  SDL_Rect rect, r0;
  int c = 0;
  
  r0.x = 0;
  r0.y = 0;
  r0.w = rect.w = tile_width;
  r0.h = rect.h = tile_height;

  if (screen == NULL)
    fprintf(stderr, "NULL!");

  SDL_FillRect(screen, NULL, SDL_MapRGB(screen->format, 0, 0, 0));
  
  for (int i = 0; i < tile_cols; i++)
      for (int j = 0; j < tile_rows; j++)
	{
	  if (c == tile_count - 1)
	    break;

	  rect.y = (i*(tile_height/2)) + y;

	  if (i%2)
	    {
	      rect.x = (j*tile_width) + x;
	    } else {
	    rect.x = (j*tile_width-(tile_width/2)) + x;
	  }

	  tiles[c].x = rect.x;
	  tiles[c].y = rect.y;
		
	  sur = Tile_Choose(tiles[c].type);
	  
	  SDL_BlitSurface(sur, &r0, screen, &rect);
	  c++;
	}
  
  SDL_FreeSurface(sur);
}

void Map_Load(char *map_name)
{
  FILE *fp;

  fp = fopen(map_name, "r");

  fscanf(fp, "%d;", &tile_count);
  tiles = malloc(tile_count * sizeof (tile));
  
  fscanf(fp, "%d;%d;", &tile_rows, &tile_cols);
  fscanf(fp, "%d;%d;", &tile_width, &tile_height);
  
  for (int i = 0; i < tile_count; i++)
    fscanf(fp, "%d;", &tiles[i].type);
  fclose(fp);
}
