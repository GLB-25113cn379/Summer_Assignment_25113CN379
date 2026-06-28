#include <iostream>
using namespace std;

int main() {
    int quantity;
    float price, total;

    cout << "Enter Quantity: ";
    cin >> quantity;

    cout << "Enter Price per Item: ";
    cin >> price;

    total = quantity * price;

    if (total > 1000)
        total = total - (0.10 * total);

    cout << "\nTotal Bill = " << total << endl;

    return 0;
} 