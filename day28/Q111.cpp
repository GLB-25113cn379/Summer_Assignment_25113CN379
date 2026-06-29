#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int seats;
    const int ticketPrice = 500;

    cout << "Enter Passenger Name: ";
    getline(cin, name);

    cout << "Enter Number of Tickets: ";
    cin >> seats;

    int total = seats * ticketPrice;

    cout << "\n----- Ticket Details -----\n";
    cout << "Passenger Name: " << name << endl;
    cout << "Tickets Booked: " << seats << endl;
    cout << "Total Amount: " << total << endl;

    return 0;
}
