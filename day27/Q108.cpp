#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int rollNo;
    float m1, m2, m3, total, percentage;

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "Enter Marks in 3 Subjects: ";
    cin >> m1 >> m2 >> m3;

    total = m1 + m2 + m3;
    percentage = total / 3;

    cout << "\n----- Marksheet -----\n";
    cout << "Name        : " << name << endl;
    cout << "Roll Number : " << rollNo << endl;
    cout << "Total Marks : " << total << endl;
    cout << "Percentage  : " << percentage << "%" << endl;

    if (percentage >= 40)
        cout << "Result      : Pass";
    else
        cout << "Result      : Fail";

    return 0;
}