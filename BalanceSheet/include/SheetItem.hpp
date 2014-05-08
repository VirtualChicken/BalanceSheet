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


} /* namespace bs */
#endif /* SHEETITEM_HPP_ */
