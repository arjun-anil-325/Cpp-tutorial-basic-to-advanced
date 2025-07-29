#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter no of rows : \n";
    cin >> rows;

    char ch = 'A';  // Start with character 'A'

    for(int i = 0; i < rows; i++) {

        for(int j = 0; j < i + 1; j++) {

            cout << ch << " ";                     // Print current character
            ch++;                                  // Move to next alphabet
        }

        cout << endl;  
    }

    return 0;
}

// sample output

// Enter no of rows : 
// 5


// A
// B C
// D E F
// G H I J
// K L M N O
