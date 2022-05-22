/*
 * CashRegister.cpp
 *
 *  Created on: May 2, 2022
 *      Author: XurDeruster
 */

#include "CashRegister.h"

CashRegister :: CashRegister()
{
	cashOnHand = 500;
}

CashRegister :: CashRegister(int cashIn)
{
	if(cashIn>=0)
	{
		cashOnHand = cashIn;
	}
	else
	{

	}

}

int CashRegister::getCurrentBalance()
{
	return cashOnHand;
}

void CashRegister::acceptAmmount(int amountIn)
{
	cashOnHand += amountIn;
}



