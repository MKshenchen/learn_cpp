#include <iostream>

using namespace std;

int main() {
  char c1, c2, c3;
  cout << "char c1: " << endl;
  cin.get(c1);
  cout << "char c2: " << endl;
  cin.get(c2);
  cout << "char c3: " << endl;
  cin.get(c3);
  cout << c1 << " " << c2 << " " << c3 << endl;
  cout << (int)c1 << " " << (int)c2 << " " << (int)c3 << endl;
  return 0;
}
