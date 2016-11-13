#ifndef MISC_H
#define MISC_H

#include <math.h>

struct point {
  int x, y;
};

typedef struct point point;

int Misc_ConvertPosition(SDL_Event *e, int input_x, int input_y, int *output_x, int *output_y, int tile_width, int tile_height);

#endif
