#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number up to which sum is calculated: ";
    cin >> n;

    int oddSum = 0;  

    for(int i = 1; i <= n; i++) {
        if(i % 2 != 0){           // Check if number is odd
            cout << i << "\n";    // Print the odd number
            oddSum += i;          // Add to sum
        }
    }

    cout << "Sum of odd nos from 1 to " << n << " : " << oddSum << endl;

    return 0;
}
