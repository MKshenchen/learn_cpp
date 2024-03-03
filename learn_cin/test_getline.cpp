#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  cout << "int n: " << endl;
  cin >> n;
  cin.ignore(); // maybe can try commit this
  string str;
  cout << "string str: " << endl;
  getline(cin, str);
  cout << "int n : " << n << endl;
  cout << "string str: " << str << endl;
  return 0;
}
