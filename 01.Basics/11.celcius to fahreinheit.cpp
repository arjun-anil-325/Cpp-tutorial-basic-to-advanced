#include <iostream>
using namespace std;

int main() {
    // Declare a variable to store temperature in Celsius
    float celsius;

    // Ask the user to enter temperature in Celsius
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    // Convert Celsius to Fahrenheit using the formula: F = (C * 9/5) + 32
    float fahrenheit = (celsius * 9 / 5) + 32;

    // Display the result
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    return 0;
}
