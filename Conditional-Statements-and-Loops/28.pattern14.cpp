#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter no of rows : \n";
    cin >> rows;

    for (int i = 0; i < rows; i++) {

        for(int j = 0; j < i; j++) {           // Print leading spaces to right-align the pattern
            cout << " ";
        }

        for(int j = 0; j < rows - i; j++) {    // Print (rows - i) times the value (i + 1)
            cout << i + 1;
        }

        cout << endl; 
    }

    return 0;
}

// sample output

// Enter no of rows : 
// 5


// 11111
//  2222
//   333
//    44
//     5
