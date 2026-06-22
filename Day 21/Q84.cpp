#include <iostream>
using namespace std;

int main() {
    char str[100];

    cout << "Enter a string (lowercase): ";
    cin.getline(str, 100);

    cout << "\nOriginal String : " << str;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    cout << "\nUppercase String: " << str << "\n";

    return 0;
}