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
	// Assets
	SheetItem assets;
	SheetItem liabilities;

public:
	Balance();
	virtual ~Balance();
};

} /* namespace bs */
#endif /* BALANCE_HPP_ */
