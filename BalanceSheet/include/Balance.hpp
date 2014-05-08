/*
 * Balance.hpp
 *
 *  Created on: Apr 24, 2014
 *      Author: f3r0x
 */

#ifndef BALANCE_HPP_
#define BALANCE_HPP_

// BalanceSheet
#include "SheetItem.hpp"

namespace bs {

class Balance {

private:

	std::string name;
	SheetItem assets;
	SheetItem liabilities;

public:
	Balance();
	Balance(std::string name);
	virtual ~Balance();
	void init();
	void print();
};

} /* namespace bs */
#endif /* BALANCE_HPP_ */
