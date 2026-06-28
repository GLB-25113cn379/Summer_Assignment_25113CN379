#include <iostream>
#include <string>
using namespace std;

int main() {
    int bookId;
    string bookName, author;

    cout << "Enter Book ID: ";
    cin >> bookId;
    cin.ignore();

    cout << "Enter Book Name: ";
    getline(cin, bookName);

    cout << "Enter Author Name: ";
    getline(cin, author);

    cout << "\n----- Book Details -----\n";
    cout << "Book ID     : " << bookId << endl;
    cout << "Book Name   : " << bookName << endl;
    cout << "Author      : " << author << endl;

    return 0;
}