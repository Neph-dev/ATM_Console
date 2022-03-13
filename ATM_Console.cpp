// ATM_Console.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void menu() 
{
    cout << "\n" << endl;
    cout << "*******Menu*******" << endl;

    cout << "1: Check Balance" << endl;
    cout << "2: Deposit" << endl;
    cout << "3: Withdrawal" << endl;
    cout << "4: Cancel" << endl;
    
    cout << "******************" << endl;
    cout << "\n" << endl;
}

int main()
{
    
    int optionChoosed;
    double availableBalance = 867.00;
    double totalBalance = availableBalance;

    do {
        menu();
        cout << "Select option: ";
        cin >> optionChoosed;

        //clear console
        system("cls");

        switch (optionChoosed) {

        case 1: cout << "Available Balance: $" << totalBalance << endl;
            break;

        case 2: cout << "Enter deposit amount: ";

            double depositAmount;

            cin >> depositAmount;

            totalBalance = availableBalance + depositAmount;

            cout << "New balance: $" << totalBalance << endl;
            break;

        case 3: cout << "Enter withdrawal amount: ";

            double withdrawalAmount;

            cin >> withdrawalAmount;

            if (withdrawalAmount > availableBalance) {
                cout << "Insufficient balance.";
            }
            else {
                totalBalance = availableBalance - withdrawalAmount;

                cout << "You have withdrawn: -$" << withdrawalAmount << endl;
                cout << "New balance: $" << totalBalance << endl;
            }
            break;

        }
    }
        while (optionChoosed != 4);
}