#include <iostream>
#include <cmath>
using namespace std;

bool isPrimeNo(int n){                             // Function to check whether a number is prime
    if(n <= 1){
        return false;                              // 0 and 1 are not prime
    }

    for(int i = 2; i <= sqrt(n); i++){             // Check divisibility up to square root of n
        if(n % i == 0){
            return false;                          // Not prime if divisible
        }
    }

    return true;                                   // Prime number
}

void printPrimeNo(int n){                          // Function to print prime numbers from 1 to n
    for(int i = 1; i <= n; i++){
        if(isPrimeNo(i)){
            cout << i << endl;                     // Print if i is prime
        }
    }
}

int main(){
    int n;

    cout << "Enter the number: ";
    cin >> n;

    cout << "Prime numbers between 1 to " << n << ":\n";
    printPrimeNo(n);

    return 0;
}

// sample output

// Enter the number: 15


// Prime numbers between 1 to 15:
// 2
// 3
// 5
// 7
// 11
// 13



