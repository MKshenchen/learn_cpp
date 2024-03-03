#include <iostream>

using namespace std;

int main() {
  char str[10];
  cout << "please in 4 char or more(maybe): " << endl;
  cin.getline(str, 5);
  cout << "str: " << str << endl;
  cout << "read state: " << cin.rdstate() << endl;
  cin.clear(cin.rdstate() & ~cin.failbit);
  cout << "read state: " << cin.rdstate() << endl;
  cout << "please in 4 char or more(maybe): " << endl;
  cin.getline(str, 5);
  cout << "str: " << str << endl;
  return 0;
}
