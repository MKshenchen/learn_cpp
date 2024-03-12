#include <string>

namespace person{
	struct Pers{
		std::string name;
		int bir_year;
		int bir_mon;
	};
	void getPers(Pers &p);
	void showPers(const Pers &p);
}
