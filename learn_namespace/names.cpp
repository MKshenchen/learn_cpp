#include <iostream>
#include "names.h"

namespace pers{
	using std::cin;
	using std::cout;
	void getPerson(Person & p){
		cout << "enter name: \n";
		cin >> p.name;
		cout << "enter age: \n";
		cin >> p.age;
	}
	void showPerson(const Person & p){
		std::cout << "name: " << p.name << ", age: " << p.age << std::endl;
	}
}

namespace debts{
	void getDebt(Debt & d){
		getPerson(d.name);
		std::cout << "enter salary: \n";
		std::cin >> d.salary;
	}
	void showDebt(const Debt & d){
		showPerson(d.name);
		std::cout << "salary: " << d.salary << std::endl;
	}
}
