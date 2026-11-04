#include "myfun.h"

int main()
{
  if(myfun(0) != 1)
    return 1;
  if(myfun(1) != 0)
    return 2;
  if(myfun(2) == 0)
    return 3;
  return 0;	
}
