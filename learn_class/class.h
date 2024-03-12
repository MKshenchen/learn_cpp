#include <string>

class Person {
  struct Pers {
    std::string name;
    int age;
  };
  Pers p;

public:
  Person();
  Person(const std::string &name, const int &age);
  void showPer();
};
