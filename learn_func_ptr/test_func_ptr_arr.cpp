#include <iostream>
using namespace std;

const double *f1(const double ar[], int n);
const double *f2(const double[], int);
const double *f3(const double *, int);

int main() {
  double ar[3] = {111.11, 222.22, 333.33};

  const double *(*p1)(const double *, int) = f1;
  auto p2 = f2;
  // const double *(*p2)(const double *, int) = f2;
  auto p3 = f3;
  cout << "single func point: \n";
  cout << "addre: " << (*p1)(ar, 3) << ", value: " << *(*p1)(ar, 3) << endl;
  cout << "addre: " << (*p2)(ar, 3) << ", value: " << *(*p2)(ar, 3) << endl;
  cout << "addre: " << p3(ar, 3) << ", value: " << *p3(ar, 3) << endl;
  cout << endl;

  const double *(*pa[3])(const double *, int) = {f1, f2, f3};
  auto pb = pa;
  // const double *(**pb)(const double *, int) = pa;
  cout << "array func pa point: \n";
  for (int i = -0; i < 3; i++)
    cout << "addre: " << pa[i](ar, 3) << ", value: " << *pa[i](ar, 3) << endl;
  cout << endl;
  cout << "array func pb point: \n";
  for (int i = -0; i < 3; i++)
    cout << "addre: " << pb[i](ar, 3) << ", value: " << *pb[i](ar, 3) << endl;
  cout << endl;

  auto pc = &pa;
  // const double *(*(*pc)[3])(const double *, int) = &pa;
  cout << "addre: " << (*pc)[0](ar, 3) << ", value: " << *(*pc)[0](ar, 3)
       << endl;
  cout << endl;

  const double *(*(*pd)[3])(const double *, int) = &pa;
  // const double * pdb = (*pd)[1](ar, 3);
  cout << "addre: " << (*(*pd)[2])(ar, 3) << ", value: " << *(*(*pd)[2])(ar, 3)
       << endl;

  return 0;
}

const double *f1(const double *ar, int n) { return ar; }

const double *f2(const double ar[], int n) { return ar + 1; }

const double *f3(const double ar[], int n) { return ar + 2; }
