#include <iostream>
#include <cmath>
using namespace std;

bool isPrimeNo(int num){
    bool isPrime = true;
    for(int i=2; i<=sqrt(num); i++){
        if(num % i ==0){               // if num is divisible by numbers other than 1, then it will be a non prime number
            isPrime = false;
        }
    }

    return isPrime;
}
int main(){

    int n;
    cout << "Enter the number : \n";
    cin >> n;

    bool isPrime = isPrimeNo(n);

    if(isPrime == true){
        cout << n <<" is prime number. \n";
    }

    else{
        cout << n <<" is not prime number. \n";
    }

    return 0;

}

// sample output

// Enter the number : 
// 97


// 97 is prime number.