#include <iostream>
using namespace std;

int bitwiseAnd(int a, int b){                // Function to find bitwise AND
    return (a&b);
}

int bitwiseOr(int a, int b){                 // Function to find bitwise OR
    return (a|b);
}

int bitwiseXor(int a, int b){                // Function to find bitwise XOR
    return (a^b);
}

int bitwiseLeftShift(int a, int b){          // Function to find bitwise left shift
    return a << b;
}

int bitwiseRightShift(int a, int b){         // Function to find bitwise right shift
    return a >> b;
}

int main(){
    int n1,n2;
    cout << "Enter two numbers : \n";
    cin >> n1 >> n2;
    cout << "Bitwise AND : "<<bitwiseAnd(n1,n2)<<endl;
    cout << "Bitwise OR : "<<bitwiseOr(n1,n2)<<endl;
    cout << "Bitwise XOR : "<<bitwiseXor(n1,n2)<<endl;
    cout << "Bitwise left shift : "<<bitwiseLeftShift(n1,n2)<<endl;
    cout << "Bitwise right shift : "<<bitwiseRightShift(n1,n2)<<endl;

    return 0;
     
}

// sample output

// Enter two numbers :
// 10
// 2

// Bitwise AND : 2
// Bitwise OR : 10
// Bitwise XOR : 8
// Bitwise left shift : 40
// Bitwise right shift : 2