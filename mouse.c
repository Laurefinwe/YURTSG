#include "mouse.h"

void findMousexy(struct point *mouse_pos, SDL_Event e)
{
  mouse_pos->x = e.motion.x;
  mouse_pos->y = e.motion.y;
}
 
