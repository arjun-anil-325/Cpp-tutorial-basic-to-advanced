#include <iostream>
using namespace std;

double myPow(double x, int n){
    long binForm = n;
    double ans = 1;

    if(binForm < 0){                        // if exponential is negative
        x = 1/x;                            // inverse the base
        binForm = -binForm;                 // make exponential negative so power becomes positive
    }

    while(binForm > 0){
        if(binForm & 1){                    // if current bit is one or we can use modulo operation(if binForm % 2 == 1)
            ans *= x;                       // multiply x with ans
        }
        x *= x;                             // square the base
        binForm >>= 1;                      // right shift exponent (divide by 2)
    }

    return ans;
}

int main(){
    double x;
    int n;
    cout << "Enter the base : \n";
    cin >> x;
    cout << "Enter the exponent : \n";
    cin >> n;

    double pow = myPow(x,n);
    cout << "Result : "<<pow<<endl;

    return 0;
}

// sample output

// i) Enter the base : 
// 3
// Enter the exponent :
// 5
// Result : 243

// ii) Enter the base :
// 2
// Enter the exponent :
// -3
// Result : 0.125