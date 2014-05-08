//============================================================================
// Name        : maint.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "SheetItem.hpp"
#include "Balance.hpp"

using namespace std;

int main() {
	cout << "Szia Evcsy!!!" << endl; // prints !!!Hello World!!!

	bs::Balance balance("Merleg");

	balance.print();


	return 0;
}
