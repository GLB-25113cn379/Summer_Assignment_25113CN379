#include <iostream>
using namespace std;

int main() {
    char str[100];
    int vowels = 0, consonants = 0, spaces = 0, others = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];


        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }

        else if (ch >= 'a' && ch <= 'z') {
            consonants++;
        }
    
        else if (ch == ' ') {
            spaces++;
        }

        else {
            others++;
        }
    }

    cout << "\nString     : " << str;

    cout << "\n\nCharacter breakdown:\n";
    cout << "================================\n";
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'A' && ch <= 'Z') ch = ch + 32;

        if      (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            cout << "'" << str[i] << "' --> Vowel\n";
        else if (ch >= 'a' && ch <= 'z')
            cout << "'" << str[i] << "' --> Consonant\n";
        else if (ch == ' ')
            cout << "' ' --> Space\n";
        else
            cout << "'" << str[i] << "' --> Other\n";
    }

    cout << "================================\n";
    cout << "\nVowels     : " << vowels     << "\n";
    cout << "Consonants : " << consonants  << "\n";
    cout << "Spaces     : " << spaces      << "\n";
    cout << "Others     : " << others      << "\n";
    cout << "================================\n";
    cout << "Total Chars: " << vowels + consonants + spaces + others << "\n";
    cout << "================================\n";

    return 0;
}