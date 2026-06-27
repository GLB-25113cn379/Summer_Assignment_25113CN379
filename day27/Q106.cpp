#include <iostream>
#include <string>
using namespace std;

int main() {
    int empId;
    string name;
    float salary;

    cout << "Enter Employee ID: ";
    cin >> empId;

    cin.ignore();

    cout << "Enter Employee Name: ";
    getline(cin, name);

    cout << "Enter Salary: ";
    cin >> salary;

    cout << "\n----- Employee Details -----\n";
    cout << "Employee ID : " << empId << endl;
    cout << "Name        : " << name << endl;
    cout << "Salary      : " << salary << endl;

    return 0;
}