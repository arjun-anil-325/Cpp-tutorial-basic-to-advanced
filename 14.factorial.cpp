#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int fact = 1; 

    if(n < 0) {

        cout << "Factorial does not exist for negative numbers.";
    }
    else if(n == 0) {
        
        cout << "Factorial of " << n << " is 1.";
    }
    else {
        
        for(int i = 1; i <= n; i++) {
            fact *= i;                                       // Multiply current number with the factorial
        }

        cout << "Factorial of " << n << " is " << fact;
    }

    return 0;
}
