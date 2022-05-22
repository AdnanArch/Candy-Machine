/*
 * DispenserType.cpp
 *
 *  Created on: May 2, 2022
 *      Author: XurDeruster
 */

#include "DispenserType.h"

DispenserType::DispenserType()
{
	cost = 50;
	noOfItems = 50;
}

DispenserType::DispenserType(int setCost, int setNoOfItems)
{
	cost = setCost;
	noOfItems = setNoOfItems;
}

int DispenserType::getCost()
{
	return cost;
}

int DispenserType::getNoOfItems()
{
	return noOfItems;
}

void DispenserType::makeSale()
{
	noOfItems--;
}
