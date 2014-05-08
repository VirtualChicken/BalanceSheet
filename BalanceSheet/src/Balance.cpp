/*
 * Balance.cpp
 *
 *  Created on: Apr 24, 2014
 *      Author: f3r0x
 */

#include "Balance.hpp"

namespace bs {

Balance::Balance() {
	init();
}

Balance::Balance(std::string name) {
	init();
	this->name = name;
}

Balance::~Balance() {
	// TODO Auto-generated destructor stub
}

void Balance::init() {

	assets.setName("Assets");
	liabilities.setName("Liabilities");

	// TODO: RAAI a strukturara!

	// Assets
	// Befektetett eszkozok
	SheetItem* noCurAs = new SheetItem ("Non-current assets");
	assets.setItem(noCurAs);
	// Forgoeszkozok
	SheetItem* worCap = new SheetItem ("Working capital");
	assets.setItem(worCap);
	// AIE
	SheetItem* prepAccInc = new SheetItem ("Prepayments and accrued income");
	assets.setItem(prepAccInc);

	// Liabilities
	// Sajat toke
	SheetItem* shEq = new SheetItem ("Shareholder\'s equity");
	liabilities.setItem(shEq);
	// Celtartalek
	SheetItem* prov = new SheetItem ("Provision");
	liabilities.setItem(prov);
	// Kotelezettsegek
	SheetItem* finLiab = new SheetItem ("Financial liabilities");
	liabilities.setItem(finLiab);
	// PIE
	SheetItem* accDefInc = new SheetItem ("Accruals and deferred income");
	liabilities.setItem(accDefInc);

}

void Balance::print() {
	std::cout << "### Name: " << name << " ###" << std::endl << std::endl;
	assets.recPrint("");
	liabilities.recPrint("");
}

} /* namespace bs */
