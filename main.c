#include "main.h"

int main(int argc, char *argv[])
{
  init(argv[1]);

  loop();

  finit();
  return 0;
}
