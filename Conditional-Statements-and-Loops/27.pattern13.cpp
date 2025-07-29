#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter no of rows : \n";
    cin >> rows;


    for (int i = 0; i < rows; i++) {

        char ch = 'A' + i;                     // Start character for the row

        for(int j = i + 1; j > 0; j--) {       // Print decreasing characters starting from 'A' + i
            cout << ch << " ";
            ch--;                              // Move to previous alphabet
        }

        cout << endl;  
    }

    return 0;
}

// sample output

// Enter no of rows : 
// 5


// A
// B A
// C B A
// D C B A
// E D C B A