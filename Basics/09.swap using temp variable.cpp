#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Asking the user to input two numbers
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Display values before swapping
    cout << "Before swapping:\n";
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";

    // Swap using a temporary variable
    int temp = a;
    a = b;
    b = temp;

    // Display values after swapping
    cout << "After swapping:\n";
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";

    return 0;
}
