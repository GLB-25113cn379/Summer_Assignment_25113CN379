#include <iostream>
#include <string>
using namespace std;

int main() {
    int patientId, age;
    string patientName, disease;

    cout << "Enter Patient ID: ";
    cin >> patientId;
    cin.ignore();

    cout << "Enter Patient Name: ";
    getline(cin, patientName);

    cout << "Enter Age: ";
    cin >> age;
    cin.ignore();

    cout << "Enter Disease: ";
    getline(cin, disease);

    cout << "\n----- Patient Details -----\n";
    cout << "Patient ID   : " << patientId << endl;
    cout << "Name         : " << patientName << endl;
    cout << "Age          : " << age << endl;
    cout << "Disease      : " << disease << endl;

    return 0;
}