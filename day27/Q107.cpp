#include <iostream>
using namespace std;

int main() {
    float basic, hra, da, totalSalary;

    cout << "Enter Basic Salary: ";
    cin >> basic;

    hra = basic * 0.20;
    da = basic * 0.10;

    totalSalary = basic + hra + da;

    cout << "\n----- Salary Details -----\n";
    cout << "Basic Salary : " << basic << endl;
    cout << "HRA          : " << hra << endl;
    cout << "DA           : " << da << endl;
    cout << "Total Salary : " << totalSalary << endl;

    return 0;
}