#include <iostream>
#include <string>

const int Lim = 8;
template <typename T> void Swap(T &a, T &b);
template <typename T> void Swap(T *a, T *b, int n);
void Show(int a[]);

int main() {
  using namespace std;

  int i = 10;
  int j = 20;
  cout << "i, j = " << i << ", " << j << ".\n";
  cout << "Using compiler-generated int swqpper: \n";
  Swap(i, j);
  cout << "Now i, j = " << i << ", " << j << endl;

  double x = 1.1;
  double y = 2.2;
  cout << "x, y = " << x << ", " << y << ".\n";
  cout << "Using compiler-generated int swqpper: \n";
  Swap(x, y);
  cout << "Now x, y = " << x << ", " << y << endl;

  string str1 = "hello";
  string str2 = "world";
  cout << "str1, str2 = " << str1 << ", " << str2 << endl;
  cout << "Swapped: \n";
  Swap(str1, str2);
  cout << "Now str1, str2 = " << str1 << ", " << str2 << endl;

  int d1[Lim] = {0, 7, 0, 4, 1, 7, 7, 6};
  int d2[Lim] = {0, 7, 2, 0, 1, 9, 6, 9};
  cout << "origin: \n";
  Show(d1);
  Show(d2);
  Swap(d1, d2, Lim);
  cout << "Swapped: \n";
  Show(d1);
  Show(d2);

  return 0;
}

template <typename T> void Swap(T &a, T &b) {
  T temp;
  temp = a;
  a = b;
  b = temp;
}

template <typename T> void Swap(T a[], T b[], int n) {
  T temp;
  for (int i = 0; i < n; i++) {
    temp = a[i];
    a[i] = b[i];
    b[i] = temp;
  }
}

void Show(int a[]) {
  using namespace std;
  cout << a[0] << a[1] << "/";
  cout << a[2] << a[3] << "/";
  for (int i = 4; i < Lim; i++)
    cout << a[i];
  cout << endl;
}
