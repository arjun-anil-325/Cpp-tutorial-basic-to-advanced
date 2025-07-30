#include <iostream>
#include <cmath>
using namespace std;

bool isPrimeNo(int n){
    bool isPrime = true;

    for(int i=2; i<=sqrt(n); i++){
        if(n%i == 0){
            isPrime = false;
        }
    }
    return isPrime;
}

void printPrimeNo(int n){

    for(int i=2; i<=n; i++){
        if(isPrimeNo(i)){
            cout << i << endl;
        }
    }
}
int main(){

    int n;
    cout << "Enter the number : \n";
    cin >> n;

    printPrimeNo(n);
    return 0;

}
