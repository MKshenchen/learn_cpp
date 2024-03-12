#include <string>

class Per{
	private:
		struct Person{
			std::string name;
			int age;
		};

	public:
		Per();
		Per(const std::string &str, const int &ag);
		void newName(Person per, std:string n);
		void newAge(Person per, int ag);
		void show();
}
