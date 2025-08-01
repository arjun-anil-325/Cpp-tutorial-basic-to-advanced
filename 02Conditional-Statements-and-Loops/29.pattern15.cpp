#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter no of rows : \n";
    cin >> rows;

    char ch = 'A';

    for (int i = 0; i < rows; i++) {

        for(int j = 0; j < i; j++) {         
            cout << " ";
        }

        for(int j = 0; j < rows - i; j++) {    
            cout << ch;
        }

        ch ++;

        cout << endl; 
    }

    return 0;
}

// sample output

// Enter no of rows : 
// 5


// AAAAA
//  BBBB
//   CCC
//    DD
//     E