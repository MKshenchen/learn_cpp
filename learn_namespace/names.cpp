#include <iostream>
#include "names.h"

namespace person{
	using std::cin;
	using std::cout;
	using std::endl;
	void getPers(Pers &p){
		cout << "enter name: \n";
		cin >> p.name;
	        	cout << "enter bir_year: \n";
		cin >> p.bir_year;
		cout << "enter bir_mon: \n";
		cin >> p.bir_mon;
	}
	void showPers(const Pers &p){
		cout << "name: " << p.name << ", bir_year: " << p.bir_year << ", bir_mon: " << p.bir_mon << ".\n";
	}
}
