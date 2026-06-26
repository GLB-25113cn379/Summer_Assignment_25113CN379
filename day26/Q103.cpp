#include <iostream>
using namespace std;

int main() {
    int choice;
    float balance = 10000, amount;

    do {
        cout << "\nATM MENU\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Balance: " << balance << endl;
                break;

            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                balance += amount;
                cout << "Amount Deposited.\n";
                break;

            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount <= balance) {
                    balance -= amount;
                    cout << "Please collect your cash.\n";
                } else {
                    cout << "Insufficient Balance.\n";
                }
                break;

            case 4:
                cout << "Thank You!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}