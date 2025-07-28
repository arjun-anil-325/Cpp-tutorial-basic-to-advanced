#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter the character: ";
    cin >> ch;

    int ascii = (int)ch;  // Get ASCII value by type casting

    if (ch >= 'a' && ch <= 'z') {
        cout << ch << " is lowercase\n";
    }
    else if (ch >= 'A' && ch <= 'Z') {
        cout << ch << " is uppercase\n";
    }
    else if (ch >= '0' && ch <= '9') {
        cout << ch << " is a digit\n";
    }
    else {
        cout << ch << " is a special character\n";
    }

    cout << "ASCII value of " << ch << " is: " << ascii << "\n";  // Always show ASCII value

    return 0;
}

