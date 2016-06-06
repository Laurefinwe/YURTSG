#include "map.h"

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
	if (i/2)
	  {
	    rect.x = j*tile_width;
	  } else {
	  rect.x = j*tile_width-(tile_width/2);
	}

	tiles[c].x = rect.x;
	tiles[c].y = rect.y;
	rect.w = tile_width;
	rect.h = tile_height;
	
	sur = choosetile(tiles[c].type);
	SDL_BlitSurface(sur, 0, screen, &rect);
	
	c++;
      }
}


void loadmap()
{
  FILE *fp;

  fp = fopen("maps/test", "r");

  fscanf(fp, "%d;", &tile_count);
  tiles = malloc(tile_count * sizeof (struct tile));
  //  tiles = malloc(5000);
  fscanf(fp, "%d;%d;", &tile_rows, &tile_cols);
  fscanf(fp, "%d;%d;", &tile_width, &tile_height);
  
  for (int i = 0; i < tile_count; i++)
    fscanf(fp, "%d;", &tiles[i].type);
  fclose(fp);
  //free(fp);
}
