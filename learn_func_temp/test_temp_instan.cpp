#include <ios>
#include <iostream>
#include <string>

struct job {
  std::string name;
  int age;
  double salary;
};

// 非模板函数_函数原型
// void Swap(job &j1, job &j2);

// 函数模板 => 通过隐式实例化生成函数定义
template <typename T> void Swap(T &a, T &b);

// 显示具体化_函数原型
template <> void Swap<job>(job &j1, job &j2);
// == template <> void Swap(job &j1, job &j2);

void show_job(const job &j);

int main() {
  using namespace std;
  cout.precision(2);
  cout.setf(ios::fixed, ios::floatfield);

  int i = 10, j = 20;
  cout << "ori i, j = " << i << ", " << j << endl;
  Swap(i, j);
  cout << "swapped i , j = " << i << ", " << j << endl;
  double x = 1.1, y = 2.2;
  cout << "ori x, y = " << x << ", " << y << endl;
  // 显示实例化
  Swap<double>(x, y);
  cout << "swapped x , y = " << x << ", " << y << endl;

  job ja = {"niko", 26, 40000};
  job jb = {"hunter", 28, 3000};
  cout << "ori's job: \n";
  show_job(ja);
  show_job(jb);
  Swap(ja, jb);
  cout << "swapped job: \n";
  show_job(ja);
  show_job(jb);
  return 0;
}

template <typename T> void Swap(T &a, T &b) {
  T temp;
  temp = a;
  a = b;
  b = temp;
}

// 显示具体化_函数定义
template <> void Swap<job>(job &j1, job &j2) {
  int ag;
  double sal;

  ag = j1.age;
  j1.age = j2.age;
  j2.age = ag;

  sal = j1.salary;
  j1.salary = j2.salary;
  j2.salary = sal;
}

void show_job(const job &j) {
  using namespace std;
  cout << "name: " << j.name << endl;
  cout << "age: " << j.age << endl;
  cout << "salary: " << j.salary << endl;
}
