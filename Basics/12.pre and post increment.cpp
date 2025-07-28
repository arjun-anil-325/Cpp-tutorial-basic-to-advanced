#include <iostream>
using namespace std;

int main() {
    int a = 5;

    // Post-increment: value is used first, then incremented
    cout << "Initial value of a: " << a << endl;
    cout << "Post-increment (a++): " << a++ << endl; // prints 5, then a becomes 6
    cout << "Value of a after post-increment: " << a << endl;

    // Pre-increment: value is incremented first, then used
    cout << "Pre-increment (++a): " << ++a << endl; // a becomes 7, then prints 7
    cout << "Final value of a: " << a << endl;

    return 0;
}
