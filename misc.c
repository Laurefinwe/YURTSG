#include misc.h

int Misc_ConvertPosition(SDL_Event *e, int input_x, int input_y, int *output_x, int *output_y, int tile_width, int tile_height)
{
  *output_x = floor((e->mousepos.x/tile_width)*tile_width);
  *output_y = floor((e->mousepos.y/tile_height)*tile_height);
}
