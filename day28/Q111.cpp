#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int accountNo;
    float balance, deposit, withdraw;

    cout << "Enter Account Holder Name: ";
    getline(cin, name);

    cout << "Enter Account Number: ";
    cin >> accountNo;

    cout << "Enter Initial Balance: ";
    cin >> balance;

    cout << "Enter Deposit Amount: ";
    cin >> deposit;
    balance += deposit;

    cout << "Enter Withdrawal Amount: ";
    cin >> withdraw;

    if (withdraw <= balance)
        balance -= withdraw;
    else
        cout << "Insufficient Balance!\n";

    cout << "\nCurrent Balance: " << balance << endl;

    return 0;
}