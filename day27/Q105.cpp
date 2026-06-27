#include <iostream>
#include <string>
using namespace std;

int main() {
    int rollNo;
    string name;
    float marks;

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Marks: ";
    cin >> marks;

    cout << "\n----- Student Record -----\n";
    cout << "Roll Number : " << rollNo << endl;
    cout << "Name        : " << name << endl;
    cout << "Marks       : " << marks << endl;

    return 0;
}