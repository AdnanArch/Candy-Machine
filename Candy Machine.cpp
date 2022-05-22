//============================================================================
// Name        : main.cpp
// Author      : Xurderuster
// Version     : 1.0
// Copyright   : Your copyright notice
// Description : A small Candy Shop Project
//============================================================================

#include <iostream>
#include "CashRegister.h"
#include "DispenserType.h"

using namespace std;

int showSelection();

void sellProduct(CashRegister& cash, DispenserType& item);

int main() {

	int choice = showSelection();

	DispenserType Candy(50, 50);
	DispenserType Chips(50, 50);
	DispenserType Gums(50, 50);
	DispenserType Cookies(50, 50);

	CashRegister cashRegister;

	switch (choice) {
	case 1:
		sellProduct(cashRegister, Candy);
		cout << "================================" << endl << endl;
		cout << "    Thanks For visiting us!" << endl << endl;
		cout << "================================" << endl << endl;
		break;
	case 2:
		sellProduct(cashRegister, Chips);
		cout << "================================" << endl << endl;
		cout << "    Thanks For visiting us!" << endl << endl;
		cout << "================================" << endl << endl;
		break;
	case 3:
		sellProduct(cashRegister, Gums);
		cout << "================================" << endl << endl;
		cout << "    Thanks For visiting us!" << endl << endl;
		cout << "================================" << endl << endl;
		break;
	case 4:
		sellProduct(cashRegister, Cookies);
		cout << "================================" << endl << endl;
		cout << "    Thanks For visiting us!" << endl << endl;
		cout << "================================" << endl << endl;
		break;
	case 5:
		cout << "================================" << endl << endl;
		cout << "    Thanks For visiting us!" << endl << endl;
		cout << "================================" << endl << endl;
		exit(0);

	default:
		cout << "Invalid Choice." << endl;
	}

	return 0;
}

int showSelection() {
	cout << "================================" << endl << endl;
	cout << "  Welcome, to the Candy Shop!" << endl << endl;
	cout << "================================" << endl << endl;
	cout << "\t1. Candy" << endl;
	cout << "\t2. Chips" << endl;
	cout << "\t3. Gums" << endl;
	cout << "\t4. Cookies" << endl;
	cout << "\t5. Exit the Program." << endl << endl;
	cout << "================================" << endl << endl;
	cout << "Please, Enter your choice : ";
	int choice;
	cin >> choice;
	cout << "\n";
	cout << "================================" << endl << endl;

	return choice;

}

void sellProduct(CashRegister& cashRegister, DispenserType& item) {
	int enteredAmount;
	int remainingAmount;

	if (item.getNoOfItems() > 0) {
		cout << "Please pay " << item.getCost() << "$ to buy this item : ";
		cin >> enteredAmount;

		if (enteredAmount < item.getCost()) {
			cout << "Pleases pay " << item.getCost() - enteredAmount
				<< "$ more to by this item : ";
			cin >> remainingAmount;
			enteredAmount += remainingAmount;
			if (enteredAmount > item.getCost()) {
				enteredAmount -= item.getCost();
				cout << "Here is your change.\nPlease collect your change "
					<< enteredAmount << "$\n" << endl;
				cout << "Please pick your item from Bottom." << endl << endl;
				item.makeSale();
			}
			else {
				cout << "The amount is not enough." << endl;
				cout << "Collect the amount that you have depositted. $" << enteredAmount << endl;
			}
		}

		else if (enteredAmount > item.getCost()) {
			enteredAmount -= item.getCost();
			cout << "Here is your change.\nPlease collect your change "
				<< enteredAmount << "$\n" << endl;
			cout << "Please pick your item from Bottom." << endl << endl;
			item.makeSale();
		}

		else {
			cout << "Collect your item from the bottom.\n" << endl;
			item.makeSale();

		}
	}

	else {
		cout << "Sorry the Item is of stock!" << endl;
	}

}
