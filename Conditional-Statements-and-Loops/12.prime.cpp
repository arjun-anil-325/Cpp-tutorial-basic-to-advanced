#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number to be checked: ";
    cin >> n;

    bool isPrime = true;  // Assume the number is prime until proven otherwise

    if (n <= 1) {         // Numbers less than or equal to 1 are not prime
        isPrime = false;
    } else {
        for (int i = 2; i <= n / 2; i++) {     // Check for any divisors from 2 to n/2
            if (n % i == 0) {                  // Found a factor, not prime
                isPrime = false;
                break;                         // Exit loop early to save time
            }
        }
    }

    if (isPrime == true) {
        cout << n << " is a prime number.\n";
    } else {
        cout << n << " is not a prime number.\n";
    }

    return 0;
}
