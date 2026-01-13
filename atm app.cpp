#include <iostream>
using namespace std;

void showmenu() {
	cout << "**************MENU*************" << endl;
	cout << "1.Check balance" << endl;
	cout << "2.Withdraw money" << endl;
	cout << "3.Deposit money" << endl;
	cout << "4.Exit" << endl;
	cout << "**************" << endl;
}
int main() {
	int option;
	int currentbalance = 500;
	do {
		showmenu();
		cout << "Option: ";
		cin >> option;
		system("cls");
		switch (option) {
		case 1: cout << "Your current balance is: Rs " << currentbalance << endl; break;
		case 2: cout << "How much money you want to withdraw : " << endl;
			int withdraw_money;
			cin >> withdraw_money;
			if (withdraw_money <= currentbalance)
				currentbalance -= withdraw_money;
			else
				cout << "Not enough money";
			break;
		case 3: cout << "How much money you want to deposit :" << endl;
			int deposit_amount;
			cin >> deposit_amount;
			currentbalance += deposit_amount;
			break;
		}
	} while(option != 4);
}