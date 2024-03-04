#include <iostream>
using namespace std;

double pp2(int);
double pp3(int);
void test(int num, double (*pf)(int));

int main() {
  int num;
  cout << "how much num: \n";
  cin >> num;
  cout << "here is pp2: \n";
  test(num, pp2);
  cout << "here is pp3: \n";
  test(num, pp3);
  return 0;
}

double pp2(int num) { return 0.2 * num; }

double pp3(int num) { return 0.3 * num; }

void test(int num, double (*pf)(int)) { cout << (*pf)(num) << endl; }
