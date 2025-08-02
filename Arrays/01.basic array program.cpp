#include <iostream>
using namespace std;
int main(){

    const int size = 5;                         // Fixed size for the array, ensures size is a constant known at compile time,

    int marks[size];                            // Declare array of fixed size
    cout << "Enter array elements : \n";

    for(int i=0; i<size; i++){                  // Input array elements
        cin >> marks[i];
    }

    cout << "Array elements are : \n";

    for(int i=0; i<size; i++){                  // Output array elements
        cout << marks[i] << endl;
    }

    return 0;
}

// sample output

// Enter array elements : 
// 99
// 100
// 54
// 36
// 88

// Array elements are :
// 99
// 100
// 54
// 36
// 88