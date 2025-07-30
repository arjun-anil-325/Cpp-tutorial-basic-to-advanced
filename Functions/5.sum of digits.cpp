#include <iostream>
using namespace std;

int sumOfDigits(int n){
    int res = 0;
    while(n > 0){
        int rem = n % 10;     // to get the last digit from the number
        res = res + rem;      // add this digit to the result 
        n /= 10;              // dicvide number by 10 to get remaining portion and repeat the process until 0>0
    }

    return res;
}

int main(){

    int num;
    cout << "Enter the number : \n";
    cin >> num;

    int sum = sumOfDigits(num);

    cout << "Sum of digits is "<< sum << endl;

    return 0;
}

// sample output

// Enter the number : 
// 12345


// Sum of digits is 15