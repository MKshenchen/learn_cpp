#include <iostream>
extern "C" {
#include "mycfunc.h"
}

int main() {
	using namespace std;
	cout << "this a simply test of extern_c.\n";
	cout << "extern_c of hello() will output: ";
	hello();
	cout << endl;
	int num;
	cout << "now please input a int num to test func of cube, num is: ";
	cin >> num;
	cout << "cube output is: " << cube(num) << endl;
	return 0;
}
