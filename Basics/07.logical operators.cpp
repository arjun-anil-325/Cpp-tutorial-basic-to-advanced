#include <iostream>
using namespace std;

int main() {
    int a = 3, b = 7;

    // Relational: Is a less than b? → 3 < 7 → true (1)
    cout << (a < b) << endl;

    // Logical NOT: !(a < b) → !true → false (0)
    cout << !(a < b) << endl;

    // Logical OR: (a < 5) OR (b > 9) → true || false → true (1)
    cout << ((a < 5) || (b > 9)) << endl;

    // Logical AND: (a < 5) AND (b > 9) → true && false → false (0)
    cout << ((a < 5) && (b > 9)) << endl;

    return 0;
}
