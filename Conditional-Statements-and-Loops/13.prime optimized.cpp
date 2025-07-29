#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter the number to be checked: ";
    cin >> n;

    bool isPrime = true;  

    if (n <= 1) {         
        isPrime = false;
    } else {
        for (int i = 2; i <= sqrt(n) / 2; i++) {   // more optimized now beacuse now loop runs from 2 to srt(n) rather than running from 2 to n/2.
            if (n % i == 0) {                 
                isPrime = false;
                break;                         
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
