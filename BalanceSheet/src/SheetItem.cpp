/*
 * SheetItem.cpp
 *
 *  Created on: Apr 17, 2014
 *      Author: f3r0x
 */

#include "SheetItem.hpp"

namespace bs {

/*************************************
 *                                   *
 *            SheetItem              *
 *                                   *
 *************************************/

SheetItem::SheetItem (std::string name, long int value) {
	this->name = name;
	this->value = value;
}

SheetItem::SheetItem(std::string name) {
	this->name = name;
	value = 0;
}

SheetItem::~SheetItem() {
	// TODO Auto-generated destructor stub
}

void SheetItem::print() {

	std::cout << "Name: " << name << std::endl;
	std::cout << "Value: " << value << std::endl;
}

//Vegigiteralunk az osszes al-elemen, es egyet betabolva kiirjuk
void SheetItem::recPrint(std::string tabs) {

	std::cout << tabs << "Name: " << name << std::endl;
	std::cout << tabs << "Value: " << value << std::endl;
	for (std::map<std::string,SheetItem*>::iterator it = items.begin(); it != items.end(); it++){
		it->second->recPrint(tabs + "	");
	}
}

void SheetItem::setName (std::string name) {
	this->name = name;
}

void SheetItem::setValue (int value) {
	this->value = value;
}

void SheetItem::setItem (SheetItem* item) {
	this->items.insert(std::pair<std::string, SheetItem*>(item->getName(), item));
}

std::string SheetItem::getName () {
	return name;
}

long int SheetItem::getValue () {
	return value;
}

SheetItem* SheetItem::getItem (std::string itemName) {
	return this->items[itemName];
}

SheetItem SheetItem::operator+ (SheetItem rightItem) {
	return SheetItem (getName(), getValue() + rightItem.getValue());
}

SheetItem SheetItem::operator+ (long int addedValue) {
	return SheetItem (getName(), getValue() + addedValue);
}

SheetItem SheetItem::operator- (SheetItem rightItem){
	return SheetItem (getName(), getValue() - rightItem.getValue());
}

SheetItem SheetItem::operator- (long int subValue){
	return SheetItem (getName(), getValue() - subValue);
}

} /* namespace bs */
