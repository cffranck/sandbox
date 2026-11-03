#include <iostream>
#include "myfun.h"

int main()
{
  std::cout << "Hello, world!" << std::endl;
  std::cout << "This is version 0.0.3." << std::endl;

  std::cout << "The result of myfun(0) is " << myfun(0) << std::endl;
  std::cout << "The result of myfun(1) is " << myfun(1) << std::endl;

  return 0;
}
