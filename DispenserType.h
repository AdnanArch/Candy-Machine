/*
 * DispenserType.h
 *
 *  Created on: May 2, 2022
 *      Author: XurDeruster
 */

#ifndef DISPENSERTYPE_H_
#define DISPENSERTYPE_H_

class DispenserType
{
public:
	DispenserType(); // set the cost and no of items to 50.
	DispenserType(int setCost, int setNoOfItems); //set the cost and items specified by user
	int getNoOfItems(); // return the no of items
	int getCost();	  // return the cost of the items.
	void makeSale(); // reduce the quantity by 1.

private:
	int noOfItems;
	int cost;

};

#endif /* DISPENSERTYPE_H_ */
