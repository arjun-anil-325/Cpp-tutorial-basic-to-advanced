#include <iostream>
using namespace std;

int main() {
    float a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    float sum = a + b;
    float difference = a - b;
    float product = a * b;

    cout << "Sum is " << sum << "\n"
         << "Difference is " << difference << "\n"
         << "Product is " << product << "\n";

    if (b != 0) { // It handles division by 0 safely by checking if (b != 0) before dividing or taking remainder and prevents the program from crashing due to undefined operations.
        float quotient = a / b;
        int remainder = (int)a % (int)b; // You cannot use % (modulo) with float or double values in C++.The modulo operator only works with integers.
        cout << "Quotient is " << quotient << "\n";
        cout << "Remainder is " << remainder << "\n";
    } else {
        cout << "Quotient: Division by zero is not allowed.\n";
        cout << "Remainder: Division by zero is not allowed.\n";
    }

    return 0;
}
