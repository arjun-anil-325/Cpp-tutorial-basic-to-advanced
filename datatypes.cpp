#include <iostream>
using namespace std;
int main(){
    int age = 23; // The variable age will store integer values. Size of int is 4 bytes or 32 bits.
    char ch = 'A'; // The varibale ch will store the ASCII value of A --> 65. Size of char is 1 byte or 8 bits. 
    float pi = 3.14; // The variable pi will store the decimal values. Size of float is 4 bytes or 32 bits.
    double price = 200.99; // The variable price will store large decimal values. Size of double is 8 bytes or 64 bits.

    cout<< sizeof(age)<<"\n" <<sizeof(ch)<<"\n" <<sizeof(pi)<<"\n" <<sizeof(price)<<"\n";
    return 0;
}