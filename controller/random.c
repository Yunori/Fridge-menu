#include <time.h>
#include "../game.h"

int alea()
{
  int min;
  int max;
  int a;
  int b;

  min = 0;
  max = 10;
  a = min;
  b = max+1;
  return rand()%(b-a) +a;
}
