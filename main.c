#include "main.h"

int main(int argc, char *argv[])
{
  Init_Main(argv[1]);

  Loop_Main();

  Finit_Main();
  return 0;
}
