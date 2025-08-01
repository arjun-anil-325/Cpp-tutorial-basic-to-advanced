#include <iostream>
using namespace std;

int main() {
    int a = 3, b = 7;

    // Less than: true if a is strictly less than b
    cout << (a < b) << endl;     // 1 (true)

    // Less than or equal to: true if a is less than or equal to b
    cout << (a <= b) << endl;    // 1 (true)

    // Greater than: true if a is strictly greater than b
    cout << (a > b) << endl;     // 0 (false)

    // Greater than or equal to: true if a is greater than or equal to b
    cout << (a >= b) << endl;    // 0 (false)

    // Equal to: true if a is equal to b
    cout << (a == b) << endl;    // 0 (false)

    // Not equal to: true if a is not equal to b
    cout << (a != b) << endl;    // 1 (true)

    return 0;
}
