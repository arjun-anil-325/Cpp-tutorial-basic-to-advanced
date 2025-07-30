#include <iostream>
using namespace std;

int sumN(int a, int b) {                // x is passed to a and y is passed to b
    
    a = a + 10;
    b = b + 10;

    return a + b;
}

int main() {
    int x = 5, y = 4;

    int sum = x + y;

    cout << sumN(x, y) << endl;        // Calls sumN with x and y; changes inside the function won't affect x and y  // Outputs: (5+10) + (4+10) = 29

    cout << sum << endl;               // Prints the original sum of x and y, unaffected by sumN()    // Outputs: 5 + 4 = 9

    return 0;
}
