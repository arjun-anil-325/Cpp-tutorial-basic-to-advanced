#include <iostream>
using namespace std;

int factorialN(int n){
    int fact = 1;

    for(int i=1; i<=n; i++){
        fact *= i;
    }

    return fact;
}
int main(){

    int n,r;
    cout <<"Enter the value of n : \n";
    cin >> n;

    cout <<"Enter the value of r : \n";
    cin >> r;

    int nCr = (factorialN(n) / (factorialN(r) * factorialN(n-r)));      // nCr = n! / r!.(n-r)!

    cout << "nCr value : " << nCr << endl;

    return 0;

}

// sample output

// Enter the value of n :
// 8
// Enter the value of r :
// 2


// nCr value : 28