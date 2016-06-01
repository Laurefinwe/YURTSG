#include "main.h"

struct tile *tiles;

int main(int argc, char *argv[])
{
  init();

  loop();

  finit();
  return 0;
}
