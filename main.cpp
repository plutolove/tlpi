#include <iostream>
#include "gnu/libc-version.h"
int main() {
  std::cout << gnu_get_libc_version() << std::endl;
  return 0;
}
