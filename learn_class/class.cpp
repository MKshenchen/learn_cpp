#include "class.h"
#include <iostream>
#include <iterator>

Person::Person() : p{"xx", 27} {}

Person::Person(const std::string &name, const int &age) {
  p.name = name;
  p.age = age;
}

void Person::showPer() {
  std::cout << "name: " << p.name << ", age: " << p.age << std::endl;
}
