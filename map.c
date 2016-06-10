#include "map.h"

void drawmap()
{
  SDL_Surface *sur;
  SDL_Rect rect, r0;
  int c = 0;
  
  r0.x = 0;
  r0.y = 0;
  r0.w = tile_width;
  r0.h = tile_height;

  rect.w = tile_width;
  rect.h = tile_height;
  
  for (int i = 0; i < tile_cols; i++)
      for (int j = 0; j < tile_rows; j++)
	{
	  if (c == tile_count - 1)
	    break;

	  rect.y = i*(tile_height/2);

	  if (i%2)
	    {
	      rect.x = j*tile_width;
	    } else {
	    rect.x = j*tile_width-(tile_width/2);
	  }

	  tiles[c].x = rect.x;
	  tiles[c].y = rect.y;
		
	  sur = choosetile(tiles[c].type);
	
	  SDL_BlitSurface(sur, &r0, screen, &rect);

	  SDL_Flip(screen);
	  c++;
	}
}

void loadmap(char *map_name)
{
  FILE *fp;

  fp = fopen(map_name, "r");

  fscanf(fp, "%d;", &tile_count);
  tiles = malloc(tile_count * sizeof (struct tile));
  
  fscanf(fp, "%d;%d;", &tile_rows, &tile_cols);
  fscanf(fp, "%d;%d;", &tile_width, &tile_height);
  
  for (int i = 0; i < tile_count; i++)
    fscanf(fp, "%d;", &tiles[i].type);
  fclose(fp);
}
