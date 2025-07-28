#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Taking input from the user
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Display before swapping
    cout << "Before swapping:\n";
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";

    // Swapping without a third variable
    a = a + b; // Step 1: a now holds the sum of a and b
    b = a - b; // Step 2: b becomes original a
    a = a - b; // Step 3: a becomes original b

    // Display after swapping
    cout << "After swapping:\n";
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";

    return 0;
}
