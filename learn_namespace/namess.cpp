#include <iostream>
#include "names.h"

int main(){
	using debts::Debt;
	using debts::getDebt;
	using debts::showDebt;

	Debt n;
	getDebt(n);
	showDebt(n);
	return 0;
}
