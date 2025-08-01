#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the number up to which sum is calculated: ";
    cin >> n;

    int sum = 0; // Initialize sum to 0

    for(int i = 1; i <= n; i++) {   // Loop from 1 to n and keep adding to sum
        sum = sum + i;
    }

    cout << "Sum of first " << n << " natural numbers: " << sum << endl;

    return 0;
}
