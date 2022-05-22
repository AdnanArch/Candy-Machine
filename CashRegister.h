/*
 * CashRegister.h
 *
 *  Created on: May 2, 2022
 *      Author: XurDeruster
 */

#ifndef CASHREGISTER_H_
#define CASHREGISTER_H_

class CashRegister
{

public:
	CashRegister();                // default constructor
	CashRegister(int cashIn);      // Parameterized constructor
	int getCurrentBalance();       // function to return the cashOnHand
	void acceptAmmount(int amount); // function to add amount to cashOnHand

private:
	int cashOnHand;

};

#endif /* CASHREGISTER_H_ */
