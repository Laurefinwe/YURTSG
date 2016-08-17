struct buildings
{
  SDL_Surface *roman_house;
};

struct tiles
{
  SDL_Surface *grass;
  SDL_Surface *desert;
  SDL_Surface *water;
};

struct images
{
  struct tiles tiles;
  struct buildings buildings;
};

typedef struct images images;
