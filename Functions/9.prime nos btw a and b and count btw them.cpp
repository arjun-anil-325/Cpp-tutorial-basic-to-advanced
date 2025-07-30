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

void printPrimeNo(int a, int b){                   // Function to print prime numbers between a and b
    for(int i = a; i <= b; i++){
        if(isPrimeNo(i)){
            cout << i << endl;                     // Print if i is prime
        }
    }
}

int countPrime(int a,int b){                       // Function used to count no of prime nos between a and b
    int count = 0;
    for(int i = a; i <= b; i++){
        if(isPrimeNo(i)){
            count ++;                     
        }
    }

    return count;

}

int main(){
    int a,b;

    cout << "Enter the starting no : \n";
    cin >> a;
    cout << "Enter the ending no : \n";
    cin >> b;

    cout << "Prime numbers between "<< a<<" and "<< b<<" : \n";
    printPrimeNo(a,b);

    cout<<"No of prime nos between "<< a<<" and "<< b<<" : "<< countPrime(a,b);

    return 0;
}

// sample output

// Enter the starting no : 
// 10
// Enter the ending no :
// 25


// Prime numbers between 10 and 25 :
// 11
// 13
// 17
// 19
// 23


// No of prime nos between 10 and 25 : 5