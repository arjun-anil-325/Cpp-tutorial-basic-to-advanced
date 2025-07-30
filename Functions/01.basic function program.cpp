#include <iostream>
using namespace std;

float sumOfTwoNo(float a, float b){         // function definition
    float sum = a + b;                      // a and b are formal parameters ie; variables that receive the values passed to the function.
    return sum;
}

float minOfTwoNo(float a, float b){         // function definition
    float min;
    if(a > b){
        min = b;
    }
    else{
        min = a;
    }
    return min;
}

int main(){

    float p,q;
    cout<<"Enter first no : \n";
    cin >> p;
    cout<<"Enter second no : \n";
    cin >> q;

    float sum = sumOfTwoNo(p, q);      // function call    // p and q are actual parameters ie; real values of variables that are passed to the function.
    float min = minOfTwoNo(p, q);      // function call
    cout << "Sum : " << sum << endl;
    cout <<"Minimum of two nos : "<< min << endl;

    return 0;

}