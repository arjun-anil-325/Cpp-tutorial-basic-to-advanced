#include <iostream>
#include <bitset>
using namespace std;


int main(){

    int num;
    cout << "Enter a negative number : \n";
    cin >> num;

    cout << "Binary 3-bit 2's complement : "<< bitset<3>(num)<<endl;
    cout << "Binary 4-bit 2's complement : "<< bitset<4>(num)<<endl;
    cout << "Binary 5-bit 2's complement : "<< bitset<5>(num)<<endl;

    return 0;

}

// sample output

// Enter a negative number : 
// -5


// Binary 3-bit 2's complement : 011
// Binary 4-bit 2's complement : 1011
// Binary 5-bit 2's complement : 11011