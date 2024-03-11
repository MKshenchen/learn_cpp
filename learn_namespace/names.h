#include <string>

namespace pers{
	struct Person{
		std::string name;
		int age;
	};
	void getPerson(Person &);
	void showPerson(const Person &);
}

namespace debts{
	using namespace pers;
	struct Debt{
		Person name;
		double salary;
	};
	void getDebt(Debt &);
	void showDebt(const Debt &);
}
