#include <iostream>
using namespace std;

int main() {
    int score = 0, ans;

    cout << "Quiz Time!\n";

    cout << "\n1. What is the capital of India?\n";
    cout << "1. Delhi\n2. Mumbai\n3. Kolkata\n4. Chennai\n";
    cin >> ans;

    if (ans == 1)
        score++;

    cout << "\n2. C++ was developed by?\n";
    cout << "1. Dennis Ritchie\n2. Bjarne Stroustrup\n3. James Gosling\n4. Guido van Rossum\n";
    cin >> ans;

    if (ans == 2)
        score++;

    cout << "\nYour Score: " << score << "/2\n";

    return 0;
}