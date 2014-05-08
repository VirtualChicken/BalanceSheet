/*
 * SheetItem.hpp
 *
 *  Created on: Apr 17, 2014
 *      Author: f3r0x
 */

#ifndef SHEETITEM_HPP_
#define SHEETITEM_HPP_

// 3PP
#include <iostream>
#include <string>
#include <map>

namespace bs {

class SheetItem {

private:
	std::string name;
	long int value;
	std::map<std::string,SheetItem> items;

public:
	SheetItem (): name(""), value(0) {}
	SheetItem (std::string name, long int value);
	SheetItem (std::string name);
	virtual ~SheetItem ();
	void print ();
	void setValue (int value);
	void setName (std::string name);
	long int getValue ();
	std::string getName ();
	SheetItem operator+ (SheetItem rightItem);
	SheetItem operator+ (long int addedValue);
	SheetItem operator- (SheetItem rightItem);
	SheetItem operator- (long int subValue);

};

//TODO: Ehelyett inkabb egy kompozit osztalyt altalanosan, ami
// egy vektorban tarolja az elemekre mutato pointereket

//CompItem: az osszesito sorokra, pl.: Befektetett eszkozok - ami tobb eszkozbol all, de maga
// is egy elem

//class CompItem: public SheetItem {
//
//private:
//	std::vector<SheetItem*> items;
//	std::vector<CompItem*> compItems;
//
//public:
//	CompItem();
//	~CompItem();
//	getItem();
//	getCompItem();
//
//};

/*class ImmatGoods: public SheetItem {

private:
	SheetItem* actValFounding; // Alapítás-átszervezés aktivált értéke
	SheetItem* actValRnD; //Kísérleti fejlesztés aktivált értéke
	SheetItem* propValRights; //Vagyoni értékű jogok
	SheetItem* intProds; //Szellemi termékek
	SheetItem* busEntVal; //Üzleti vagy cégérték
	SheetItem* depImmGoods; //Immateriális javakra adott előlegek
	SheetItem* valAdjImmGoods; //Immateriális javak értékhelyesbítése
public:
	ImmatGoods() {
		actValFounding = new SheetItem();
		actValRnD = new SheetItem();
		propValRights = new SheetItem();
		intProds = new SheetItem();
		busEntVal = new SheetItem();
		depImmGoods = new SheetItem();
		valAdjImmGoods = new SheetItem();
	}

	~ImmatGoods () {

	}
};*/

/*class Assets {

private:
	long int value;

	//elements
	SheetItem immatGoods;
	SheetItem cash;
	SheetItem bankDeposits;
	SheetItem

};*/

} /* namespace bs */
#endif /* SHEETITEM_HPP_ */
