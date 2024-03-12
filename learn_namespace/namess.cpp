#include "names.h"
#include <iostream>

int main() {
  using person::getPers;
  using person::Pers;
  using person::showPers;
  Pers p;
  getPers(p);
  showPers(p);
  return 0;
}
