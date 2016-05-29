SDL_Surface *choosetile(int ltype)
{
  SDL_Surface *sur;
  switch (ltype)
    {
    case 0:
      return sur = IMG_Load("graphics/tiles/grass.bmp");
      break;
    case 1:
      return sur = IMG_Load("graphics/tiles/desert.bmp");
      break;
    }
}
