#include<iostream>
using namespace std;

int fiboSeq(int n){

    if(n == 0){
        return 0;                 // F(0) = 0.
    }

    if(n == 1){                   // F(1) = 1.
        return 1;
    }

    int res = 0;
    int num1 = 0;
    int num2 = 1;

    for(int i=2; i<=n; i++){      // initialsing loop from 2 onwards becomes index starts from 0.
        res = num1 + num2;
        num1 = num2;
        num2 = res;
    }

    return res;
}
int main(){

    int n;
    cout << "Enter the number: \n";
    cin >> n;

    if(n < 0){
        cout << "Fibonacci number is not defined for " << n << endl;
    }
    else{
        cout << n <<"th Fibonacci no : "<<fiboSeq(n)<<"\n";
    }

    return 0;

}

// sample output

// Index:   0   1   2   3   4   5   6   7   8   9   10
// Value:   0   1   1   2   3   5   8  13  21  34   55

// i) Enter the number: 
// 10

// 10th Fibonacci no : 55

// ii) Enter the number: 
// 0

// 0th Fibonacci no : 0

// iii) Enter the number:
// 1

// 1th Fibonacci no : 1

// iv) Enter the number:
// -9

// Fibonacci number is not defined for -9
